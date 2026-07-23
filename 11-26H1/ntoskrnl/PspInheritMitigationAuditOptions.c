/*
 * XREFs of PspInheritMitigationAuditOptions @ 0x140A8F8D4
 * Callers:
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspInheritMitigationAuditOptions(__int128 *a1, __int128 *a2, __int64 a3)
{
  int i; // r11d
  __int64 v6; // xmm1_8
  char v7; // bl
  __int128 v8; // xmm0
  bool v9; // dl
  __int64 v10; // xmm1_8
  unsigned __int64 v11; // rdi
  unsigned __int8 v12; // r8
  __int64 v13; // r10
  __int64 result; // rax
  __int64 v15; // xmm1_8
  __int128 v16; // [rsp+0h] [rbp-68h]
  __int64 v17; // [rsp+10h] [rbp-58h]
  __int128 v18; // [rsp+20h] [rbp-48h]
  __int64 v19; // [rsp+30h] [rbp-38h]
  __int128 v20; // [rsp+40h] [rbp-28h]
  __int64 v21; // [rsp+50h] [rbp-18h]

  v16 = 0LL;
  v17 = 0LL;
  for ( i = 0; i < 40; ++i )
  {
    v6 = *((_QWORD *)a1 + 2);
    v20 = *a1;
    v7 = (4 * i) & 0x3F;
    v8 = *a2;
    v21 = v6;
    v9 = 1;
    v10 = *((_QWORD *)a2 + 2);
    v11 = (unsigned __int64)(unsigned int)(4 * i) >> 6;
    v18 = v8;
    v19 = v10;
    v12 = (*((_QWORD *)&v18 + v11) >> v7) & 3;
    v13 = (*((_QWORD *)&v20 + v11) >> v7) & 3LL;
    if ( ((*((_QWORD *)&v20 + v11) >> v7) & 3) == 0 )
    {
LABEL_5:
      v9 = ((v12 - 1) & 0xFD) != 0;
      goto LABEL_6;
    }
    switch ( (_DWORD)v13 )
    {
      case 1:
        goto LABEL_11;
      case 2:
        goto LABEL_5;
      case 3:
LABEL_11:
        v9 = v12 != 2;
        break;
    }
LABEL_6:
    if ( !v9 )
      LODWORD(v13) = v12;
    result = *((_QWORD *)&v16 + v11) & ~(15LL << v7);
    *((_QWORD *)&v16 + v11) = result | ((unsigned __int64)(unsigned int)v13 << v7);
  }
  v15 = v17;
  *(_OWORD *)a3 = v16;
  *(_QWORD *)(a3 + 16) = v15;
  return result;
}
