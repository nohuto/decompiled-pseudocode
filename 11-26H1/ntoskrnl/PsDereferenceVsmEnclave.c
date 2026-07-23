/*
 * XREFs of PsDereferenceVsmEnclave @ 0x140AB8F4C
 * Callers:
 *     MiCanDeleteEnclave @ 0x140704A74 (MiCanDeleteEnclave.c)
 *     PsCallEnclave @ 0x140803C20 (PsCallEnclave.c)
 *     PsDeleteVsmEnclave @ 0x140804538 (PsDeleteVsmEnclave.c)
 *     MiTerminateEnclave @ 0x14087D03C (MiTerminateEnclave.c)
 *     MiInitializeVsmEnclave @ 0x140AB8C78 (MiInitializeVsmEnclave.c)
 * Callees:
 *     VslCloseSecureHandle @ 0x1404E7AA0 (VslCloseSecureHandle.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PsDereferenceVsmEnclave(PVOID P)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 v4; // rax
  void *v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // rdi

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)P + 2, 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  v4 = v2 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    VslCloseSecureHandle(*((_QWORD *)P + 3));
    if ( *((_BYTE *)P + 76) )
    {
      v6 = (_QWORD *)*((_QWORD *)P + 13);
      if ( v6 )
      {
        do
        {
          while ( 1 )
          {
            v7 = (_QWORD *)*v6;
            if ( !*v6 )
            {
              v7 = (_QWORD *)v6[1];
              if ( !v7 )
                break;
            }
            v6 = v7;
          }
          v8 = (_QWORD *)(v6[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( v8 )
          {
            if ( (_QWORD *)*v8 == v6 )
              *v8 = 0LL;
            else
              v8[1] = 0LL;
          }
          ExFreePoolWithTag(v6, 0);
          v6 = v8;
        }
        while ( v8 );
      }
    }
    v5 = (void *)*((_QWORD *)P + 15);
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    ExFreePoolWithTag(P, 0);
  }
}
