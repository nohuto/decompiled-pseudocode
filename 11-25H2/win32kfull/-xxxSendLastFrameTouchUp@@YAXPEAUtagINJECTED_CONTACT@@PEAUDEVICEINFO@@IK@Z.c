/*
 * XREFs of ?xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z @ 0x140231DEC
 * Callers:
 *     xxxInjectTouchInput @ 0x14023D0FC (xxxInjectTouchInput.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x14002C740 (PopAndFreeW32ThreadLock.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?_GetQpcBasedTouchStackTime@@YAKXZ @ 0x14027AD6C (-_GetQpcBasedTouchStackTime@@YAKXZ.c)
 *     ?xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z @ 0x14027ADF8 (-xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z.c)
 */

void __fastcall xxxSendLastFrameTouchUp(struct tagINJECTED_CONTACT *a1, struct DEVICEINFO *a2, __int64 a3, int a4)
{
  unsigned int v4; // ebp
  _DWORD *v5; // r14
  unsigned int v6; // ebx
  _DWORD *v7; // rcx
  unsigned int v8; // edi
  __int64 v11; // rdx
  struct tagPOINTER_TOUCH_INFO *v12; // rsi
  unsigned int v13; // r9d
  unsigned int i; // r8d
  __int64 v15; // rcx
  struct tagTHREADINFO *v16; // rax
  __int64 v17; // rdx
  _QWORD v18[4]; // [rsp+20h] [rbp-48h] BYREF

  if ( (_DWORD)a3 )
  {
    v4 = a3;
    v5 = (_DWORD *)((char *)a1 + 8);
    v6 = 0;
    v7 = (_DWORD *)((char *)a1 + 8);
    v8 = 0;
    a3 = (unsigned int)a3;
    do
    {
      if ( ((*v7 - 0x20000) & 0xFFFDFFFF) != 0 )
        ++v8;
      v7 += 3;
      --a3;
    }
    while ( a3 );
    if ( v8 )
    {
      v12 = (struct tagPOINTER_TOUCH_INFO *)Win32AllocPoolWithQuotaZInit(144LL * v8, 1953067861LL);
      if ( v12 )
      {
        v13 = 0;
        for ( i = 0; i < v4; ++i )
        {
          v15 = (unsigned int)(*v5 - 0x20000);
          if ( (v15 & 0xFFFDFFFF) != 0 )
          {
            v11 = 18LL * v13;
            *((_DWORD *)v12 + 2 * v11 + 1) = i;
            *((_QWORD *)v12 + v11 + 4) = *((_QWORD *)v5 - 1);
            v15 = (*v5 & 4) != 0 ? 0x40000 : 0x20000;
            LODWORD(v15) = v15 | 0x8000;
            *((_DWORD *)v12 + 2 * v11 + 3) = v15;
            ++v13;
            *v5 = 0x20000;
          }
          v5 += 3;
        }
        v16 = PtiCurrent(v15, v11);
        v18[0] = *((_QWORD *)v16 + 48);
        *((_QWORD *)v16 + 48) = v18;
        v18[2] = Win32FreePool;
        v18[1] = v12;
        if ( a4 )
          v6 = _GetQpcBasedTouchStackTime() - a4;
        xxxSendToTouchStack(a2, v8, v12, v6);
        PopAndFreeW32ThreadLock((__int64)v18, v17);
      }
    }
  }
}
