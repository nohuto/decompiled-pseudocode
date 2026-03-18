/*
 * XREFs of ?bExpand@STACKOBJ@@QEAAHK@Z @ 0x140332E1C
 * Callers:
 *     ?bPushMergeScrScan@STACKOBJ@@QEAAHXZ @ 0x1401DF7B0 (-bPushMergeScrScan@STACKOBJ@@QEAAHXZ.c)
 * Callees:
 *     PALLOCNOZ @ 0x140184030 (PALLOCNOZ.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall STACKOBJ::bExpand(STACKOBJ *this, unsigned int a2, __int64 a3)
{
  void *v3; // rsi
  unsigned int v4; // edi
  void *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx
  bool v10; // zf
  __int64 v11; // rax
  __int64 v12; // rax

  v3 = (void *)*((_QWORD *)this + 4);
  v4 = a2 + 440;
  if ( a2 + 440 < a2 )
    return 0LL;
  v6 = (void *)PALLOCNOZ(v4, 1684817479LL, a3);
  *((_QWORD *)this + 4) = v6;
  if ( !v6 )
    return 0LL;
  memmove(v6, v3, *((unsigned int *)this + 1));
  v7 = *((_QWORD *)this + 1);
  v8 = *((_QWORD *)this + 4);
  *(_DWORD *)this = v4;
  v9 = v8 - (_QWORD)v3 + v7;
  v10 = *((_DWORD *)this + 1) == 0;
  *((_QWORD *)this + 1) = v9;
  if ( v10 )
  {
    *(_QWORD *)(v9 + 8) = v9;
  }
  else
  {
    v11 = *(_QWORD *)(v9 + 8);
    if ( v11 != v8 )
    {
      do
      {
        v12 = v8 - (_QWORD)v3 + v11;
        *(_QWORD *)(v9 + 8) = v12;
        v9 = v12;
        v11 = *(_QWORD *)(v12 + 8);
      }
      while ( v11 != *((_QWORD *)this + 4) );
    }
  }
  Win32FreePool(v3);
  return 1LL;
}
