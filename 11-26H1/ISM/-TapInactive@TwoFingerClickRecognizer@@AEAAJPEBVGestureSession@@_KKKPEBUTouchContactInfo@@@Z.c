/*
 * XREFs of ?TapInactive@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801BB808
 * Callers:
 *     ?Add@TwoFingerClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801BB320 (-Add@TwoFingerClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     ?ExceedsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@KK@Z @ 0x1801B9F24 (-ExceedsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@KK@Z.c)
 */

__int64 __fastcall TwoFingerClickRecognizer::TapInactive(
        TwoFingerClickRecognizer *this,
        const struct GestureSession *a2,
        char a3,
        int a4,
        unsigned int a5,
        const struct TouchContactInfo *a6)
{
  const struct TouchContactInfo *v6; // rbx
  unsigned int v8; // edx
  __int16 v9; // r10
  _DWORD *v10; // rdi
  _QWORD *v11; // r9
  __int64 *v12; // r8
  _DWORD *v13; // r11
  __int64 v14; // rbp
  __int64 v15; // rax
  unsigned int v16; // r9d
  struct tagPOINT v18; // [rsp+38h] [rbp+10h] BYREF

  v18 = (struct tagPOINT)a2;
  v6 = a6;
  if ( (a3 & 1) != 0 )
  {
    v8 = a5;
    v9 = 0;
    if ( a5 <= 2 )
    {
      v10 = (_DWORD *)((char *)a6 + 4);
      if ( a5 )
      {
        v11 = (_QWORD *)((char *)this + 44);
        v12 = (__int64 *)((char *)a6 + 4);
        v13 = (_DWORD *)((char *)this + 36);
        v14 = a5;
        do
        {
          *v13++ = *((unsigned __int16 *)v12 - 1);
          v15 = *v12;
          v12 += 5;
          *v11++ = v15;
          --v14;
        }
        while ( v14 );
      }
      if ( v8 == 1 )
      {
        *((_DWORD *)this + 6) = a4 + *((unsigned __int16 *)this + 31);
        *((_WORD *)this + 8) |= 0x10u;
        *((_DWORD *)this + 5) = 1;
        return 0LL;
      }
      v16 = *((unsigned __int16 *)this + 30);
      v18.x = *v10 - *((_DWORD *)v6 + 11);
      v18.y = *((_DWORD *)v6 + 2) - *((_DWORD *)v6 + 12);
      if ( !GestureRecognizer::ExceedsThreshold(this, &v18, v16, v16) )
      {
        *((_DWORD *)this + 6) = a4 + *((unsigned __int16 *)this + 32);
        *((_WORD *)this + 8) |= 0x10u;
        *((_DWORD *)this + 5) = 2;
        return 0LL;
      }
    }
    *((_WORD *)this + 8) = v9;
    *((_DWORD *)this + 5) = 4;
  }
  return 0LL;
}
