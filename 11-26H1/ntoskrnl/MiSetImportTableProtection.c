/*
 * XREFs of MiSetImportTableProtection @ 0x140B53544
 * Callers:
 *     MiResolveImageImports @ 0x1408753A8 (MiResolveImageImports.c)
 * Callees:
 *     MiSetImageProtection @ 0x14038B930 (MiSetImageProtection.c)
 *     RtlImageDirectoryEntryToData @ 0x14040E290 (RtlImageDirectoryEntryToData.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x140772CFC (MiLogStrongCodeDriverLoadFailure.c)
 */

__int64 __fastcall MiSetImportTableProtection(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r14
  unsigned __int64 v5; // rax
  int v6; // edi
  unsigned int *v8; // rsi
  __int64 v9; // rax
  _QWORD *v10; // rax
  int v11; // edi
  int v12; // ecx
  int v13; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  v13 = 0;
  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v5 = RtlImageDirectoryEntryToData(v2, 1, 0xCu, &v13);
  *(_QWORD *)a2 = v5;
  if ( !v5 || (v6 = v13) == 0 )
  {
    v6 = 0;
    *(_QWORD *)a2 = 0LL;
    v8 = (unsigned int *)RtlImageDirectoryEntryToData(v2, 1, 1u, &v13);
    *(_QWORD *)(a2 + 8) = v8;
    while ( v8 )
    {
      v9 = *v8;
      if ( !(_DWORD)v9 )
        break;
      v10 = (_QWORD *)(v2 + v9);
      v11 = 0;
      if ( *v10 )
      {
        v12 = 1;
        do
        {
          v11 = v12;
          ++v10;
          ++v12;
        }
        while ( *v10 );
      }
      v6 = 8 * v11;
      if ( !(unsigned int)MiSetImageProtection(a1, v2 + v8[4], v6) )
      {
        MiLogStrongCodeDriverLoadFailure("UnwritableImportDirectory", a1);
        *(_DWORD *)&stru_140E2D150.WaitBlockFill10[8] = 193;
        return 3221225595LL;
      }
      ++*(_DWORD *)(a2 + 16);
      v8 += 5;
    }
    goto LABEL_7;
  }
  if ( (unsigned int)MiSetImageProtection(a1, v5, v13) )
  {
    *(_DWORD *)(a2 + 16) = 1;
LABEL_7:
    *(_DWORD *)(a2 + 20) = v6;
    return 0LL;
  }
  MiLogStrongCodeDriverLoadFailure("UnwritableIAT", a1);
  *(_DWORD *)&stru_140E2D150.WaitBlockFill10[8] = 192;
  return 3221225595LL;
}
