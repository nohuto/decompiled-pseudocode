/*
 * XREFs of USBCntrlGetSetGEQ @ 0x1400391D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B42C (WPP_RECORDER_AND_TRACE_SF_.c)
 *     USBHwGetSetProperty @ 0x14003B5E0 (USBHwGetSetProperty.c)
 */

__int64 __fastcall USBCntrlGetSetGEQ(__int64 a1, __int64 a2, int a3, __int64 a4, unsigned int a5, int a6)
{
  unsigned int v6; // ebx
  __int64 v7; // r15
  unsigned int v9; // edi
  unsigned int v10; // r13d
  __int64 v11; // rbp
  __int64 v12; // r9
  _DWORD *Pool2; // r14
  char v14; // di
  _BYTE *v15; // rcx
  int *v16; // r8
  int v17; // eax
  int v18; // edx
  bool v19; // zf
  unsigned int i; // ecx
  int v21; // eax
  __int64 v22; // rdx
  int v23; // edx
  int v24; // r8d
  __int64 v26; // rax
  __int64 v27; // [rsp+50h] [rbp-48h]
  int v28; // [rsp+A0h] [rbp+8h]
  int SetProperty; // [rsp+C0h] [rbp+28h]

  v28 = a1;
  v6 = 0;
  v7 = *(_QWORD *)(a2 + 128);
  v9 = -1073741670;
  v10 = 30;
  v27 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  v11 = 5LL * a5;
  if ( *(_DWORD *)(v7 + 40LL * a5 + 12) )
    v10 = *(_DWORD *)(v7 + 40LL * a5 + 12);
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, v10 + 4, 1096972357LL);
  if ( !Pool2 )
    return v9;
  v14 = 1;
  if ( a6 != 1 )
  {
LABEL_9:
    LOBYTE(v12) = a6;
    SetProperty = USBHwGetSetProperty(
                    v28,
                    27,
                    a6 != 1,
                    v12,
                    6,
                    *(_WORD *)(v7 + 40LL * a5 + 8),
                    *(_WORD *)(a2 + 80),
                    *(unsigned __int8 *)(*(_QWORD *)(v27 + 48) + 2LL),
                    (__int64)Pool2,
                    v10 + 4);
    if ( SetProperty >= 0 )
    {
      if ( (a6 & 0x80u) == 0 )
      {
        if ( *(_DWORD *)(v7 + 8 * v11 + 12) )
        {
          do
          {
            v26 = v6++;
            *(_DWORD *)(*(_QWORD *)(v7 + 8 * v11 + 32) + 20 * v26) = *(_DWORD *)(a4 + 4 * v26);
          }
          while ( v6 < *(_DWORD *)(v7 + 8 * v11 + 12) );
        }
      }
      else
      {
        v19 = *(_DWORD *)a4 == 0;
        if ( !*(_DWORD *)a4 )
        {
          *(_DWORD *)(a4 + 4) = *Pool2;
          for ( i = 0; i < 0x1E; ++i )
          {
            v21 = *Pool2;
            if ( _bittest(&v21, i) )
              ++*(_DWORD *)a4;
          }
          v19 = *(_DWORD *)a4 == 0;
        }
        if ( !v19 )
        {
          do
          {
            v22 = v6++;
            *(_DWORD *)(*(_QWORD *)(a4 + 16) + 4 * v22) = *((char *)Pool2 + v22 + 4) << 14;
          }
          while ( v6 < *(_DWORD *)a4 );
        }
      }
    }
    ExFreePool(Pool2);
    return (unsigned int)SetProperty;
  }
  if ( a3 == 4 * v10 )
  {
    *Pool2 = *(_DWORD *)(v7 + 40LL * a5 + 16);
    v15 = Pool2 + 1;
    v12 = v10;
    v16 = (int *)a4;
    do
    {
      v17 = *v16;
      v18 = *v16++ >> 31;
      *v15++ = __SPAIR64__(v18, v17) / 0x4000;
      --v12;
    }
    while ( v12 );
    goto LABEL_9;
  }
  ExFreePool(Pool2);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v14 = 0;
  }
  if ( v14 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v23) = v14;
    LOBYTE(v24) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, v23, v24, WPP_GLOBAL_Control->DeviceExtension);
  }
  return 3221225990LL;
}
