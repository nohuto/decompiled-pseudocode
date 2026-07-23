/*
 * XREFs of MiConvertHiberPhasePte @ 0x140C0BDD0
 * Callers:
 *     <none>
 * Callees:
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiIsPfn @ 0x14041A8F0 (MiIsPfn.c)
 */

__int64 __fastcall MiConvertHiberPhasePte(__int64 a1, unsigned __int64 *a2, int a3)
{
  unsigned __int64 v3; // rbx
  bool v5; // zf
  __int16 PteShadow; // ax
  unsigned __int64 v8; // rbx
  PVOID v10; // rdi
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = *a2;
  v5 = *(_QWORD *)(a1 + 184) == 0LL;
  v11[0] = *a2;
  if ( v5 )
  {
    PteShadow = v3;
    if ( (unsigned __int64)v11 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v11 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      PteShadow = MiReadPteShadow((unsigned __int64)v11, v3);
      v3 = v11[0];
    }
    if ( (PteShadow & 1) == 0 && (PteShadow & 0x400) != 0 && (PteShadow & 4) != 0 )
    {
      v8 = v3 & 0xFFFFFFFFFFFFFBFAuLL | 1;
LABEL_7:
      *a2 = v8;
    }
  }
  else if ( (v3 & 1) != 0 && !a3 )
  {
    v10 = (PVOID)((v3 >> 12) & 0xFFFFFFFFFFLL);
    if ( MiIsPfn((unsigned __int64)v10)
      && v10 != qword_140E36180[0]
      && v10 != (PVOID)qword_140E361B8
      && !_bittest64(*(const signed __int64 **)(*(_QWORD *)(a1 + 184) + 8LL), (unsigned int)v10) )
    {
      v8 = v3 & 0xFFFFFFFFFFFFFBFAuLL | 0x404;
      goto LABEL_7;
    }
  }
  return 0LL;
}
