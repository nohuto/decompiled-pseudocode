/*
 * XREFs of LogOp2 @ 0x140012A30
 * Callers:
 *     <none>
 * Callees:
 *     LogOp2_32 @ 0x140012BEC (LogOp2_32.c)
 *     ValidateArgTypes @ 0x140013230 (ValidateArgTypes.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall LogOp2(__int64 a1, _QWORD *a2)
{
  __int64 v4; // r8
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdx
  int v12; // esi
  int v13; // ecx
  __int64 v14; // rax
  bool v15; // bp
  __int64 v16; // rax
  unsigned int v17; // [rsp+50h] [rbp+18h] BYREF

  v17 = 0;
  if ( !ghGetAcpiTableVersion )
    return LogOp2_32(a1, a2);
  ghGetAcpiTableVersion(1413763908LL, &v17);
  if ( v17 < 2 )
    return LogOp2_32(a1, a2);
  v11 = a2[10];
  if ( *(_WORD *)(v11 + 2) != 1 || *(_WORD *)(v11 + 42) != 1 )
    return LogOp2_32(a1, a2);
  LOBYTE(v4) = 1;
  v15 = 0;
  v12 = ValidateArgTypes(a1, v11, v4, "II");
  if ( v12 >= 0 )
  {
    v13 = *(_DWORD *)(a2[7] + 8LL);
    if ( v13 == 147 )
    {
      if ( *(_QWORD *)(a2[10] + 16LL) != *(_QWORD *)(a2[10] + 56LL) )
      {
        *(_WORD *)(a2[11] + 2LL) = 1;
        goto LABEL_10;
      }
      goto LABEL_21;
    }
    v6 = v13 - 144;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 3;
        if ( v8 )
        {
          if ( v8 == 1 )
            v15 = *(_QWORD *)(a2[10] + 16LL) < *(_QWORD *)(a2[10] + 56LL);
        }
        else
        {
          v15 = *(_QWORD *)(a2[10] + 16LL) > *(_QWORD *)(a2[10] + 56LL);
        }
      }
      else
      {
        v16 = a2[10];
        if ( !*(_QWORD *)(v16 + 16) && !*(_QWORD *)(v16 + 56) )
        {
          *(_WORD *)(a2[11] + 2LL) = 1;
          goto LABEL_10;
        }
        v15 = 1;
      }
    }
    else
    {
      v14 = a2[10];
      if ( *(_QWORD *)(v14 + 16) && *(_QWORD *)(v14 + 56) )
      {
LABEL_21:
        v9 = 1LL;
        *(_WORD *)(a2[11] + 2LL) = 1;
        goto LABEL_22;
      }
    }
    v9 = 1LL;
    *(_WORD *)(a2[11] + 2LL) = 1;
    if ( !v15 )
    {
LABEL_10:
      v10 = 0LL;
LABEL_11:
      *(_QWORD *)(a2[11] + 16LL) = v10;
      return (unsigned int)v12;
    }
LABEL_22:
    v17 = 0;
    if ( ghGetAcpiTableVersion )
    {
      ghGetAcpiTableVersion(1413763908LL, &v17);
      if ( v17 >= 2 )
        v9 = 0LL;
    }
    v10 = (v9 << 32) - 1;
    goto LABEL_11;
  }
  return (unsigned int)v12;
}
