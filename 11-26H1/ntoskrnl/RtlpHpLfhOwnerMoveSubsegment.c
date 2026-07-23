/*
 * XREFs of RtlpHpLfhOwnerMoveSubsegment @ 0x14034B5AC
 * Callers:
 *     RtlpHpLfhPrivateSlotShutdown @ 0x140349F4C (RtlpHpLfhPrivateSlotShutdown.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x14034B2B0 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhOwnerFreeListProcess @ 0x14034B470 (RtlpHpLfhOwnerFreeListProcess.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1403FBD90 (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpLfhOwnerMoveSubsegment(__int64 a1, char *a2, __int64 *a3, int a4, char a5)
{
  unsigned int v8; // r10d
  signed __int64 v9; // rax
  char v10; // r14
  __int64 v11; // rcx
  __int64 **v12; // r9
  _BYTE *v13; // r11
  __int64 v14; // r12
  _BYTE *v15; // rdi
  char v16; // r14
  unsigned __int64 v17; // rdx
  bool v18; // zf
  __int64 *v19; // rcx
  __int64 **v20; // rax
  __int64 **v21; // rax
  __int64 *v22; // rax
  char *v24; // [rsp+0h] [rbp-40h]
  _QWORD v25[5]; // [rsp+8h] [rbp-38h]
  __int128 v26; // [rsp+30h] [rbp-10h]
  signed __int64 v27; // [rsp+88h] [rbp+48h]
  signed __int64 v28; // [rsp+90h] [rbp+50h]

  v24 = a2 + 24;
  v25[0] = a2 + 1;
  v8 = 0;
  v25[2] = 0LL;
  v25[1] = a2 + 40;
  v25[3] = a2 + 40;
  v9 = a3[2];
  v10 = *a2;
  v25[4] = 0LL;
  v26 = 0LL;
  v11 = 2LL * a4;
  HIDWORD(v28) = HIDWORD(v9);
  v27 = v9;
  v12 = (__int64 **)v25[2 * a4 - 1];
  v13 = (_BYTE *)v25[v11];
  v14 = v25[2 * BYTE6(v9) - 1];
  v15 = (_BYTE *)v25[2 * BYTE6(v9)];
  v16 = v10 & 1;
  if ( v16 )
  {
    v15 = 0LL;
    v13 = 0LL;
  }
  if ( !a4 )
  {
    if ( !v16 && *v13 >= 8u )
      return v8;
    goto LABEL_10;
  }
  if ( a4 == 1 )
  {
    LODWORD(v28) = 0;
    v9 = v28;
    goto LABEL_10;
  }
  if ( a4 != 3 )
  {
LABEL_10:
    LOWORD(v17) = WORD2(v27);
    goto LABEL_11;
  }
  LOWORD(v17) = 0;
  WORD2(v27) = 0;
LABEL_11:
  if ( BYTE6(v28) == 3 )
  {
    v17 = (unsigned __int64)&a2[-a1] >> 6;
    WORD2(v27) = v17;
  }
  BYTE6(v27) = a4;
  if ( a4 == 1 )
  {
    v28 = _InterlockedCompareExchange64(a3 + 2, v27, v9);
    v18 = (_DWORD)v28 == 0;
    goto LABEL_15;
  }
  if ( (a5 & 1) == 0 )
  {
    if ( *((_WORD *)a3 + 16) == *((_WORD *)a3 + 17) )
      a3[2] = v27;
    else
      WORD2(v28) = _InterlockedExchange((volatile __int32 *)a3 + 5, SHIDWORD(v27));
    goto LABEL_23;
  }
  if ( BYTE6(v9) != 2 )
  {
    v18 = HIDWORD(v9) == _InterlockedCompareExchange((volatile signed __int32 *)a3 + 5, SHIDWORD(v27), SHIDWORD(v9));
LABEL_15:
    if ( !v18 )
      return v8;
LABEL_23:
    if ( WORD2(v28) != (_WORD)v17 )
    {
      if ( (_WORD)v17 )
      {
        if ( (*a2 & 1) == 0 )
          *((_WORD *)a3 + 23) = *((_WORD *)a2 + 2);
      }
      else
      {
        *((_WORD *)a3 + 23) = 0;
      }
    }
    if ( v14 )
    {
      v19 = (__int64 *)*a3;
      if ( *(__int64 **)(*a3 + 8) != a3 )
        goto LABEL_38;
      v20 = (__int64 **)a3[1];
      if ( *v20 != a3 )
        goto LABEL_38;
      *v20 = v19;
      v19[1] = (__int64)v20;
      if ( v15 )
        --*v15;
    }
    if ( !v12 )
      return 1;
    if ( *((_WORD *)a3 + 16) == *((_WORD *)a3 + 17) )
    {
      v21 = (__int64 **)v12[1];
      if ( *v21 == (__int64 *)v12 )
      {
        *a3 = (__int64)v12;
        a3[1] = (__int64)v21;
        *v21 = a3;
        v12[1] = a3;
        goto LABEL_40;
      }
    }
    else
    {
      v22 = *v12;
      if ( (__int64 **)(*v12)[1] == v12 )
      {
        *a3 = (__int64)v22;
        a3[1] = (__int64)v12;
        v22[1] = (__int64)a3;
        *v12 = a3;
LABEL_40:
        if ( v13 )
          ++*v13;
        return 1;
      }
    }
LABEL_38:
    __fastfail(3u);
  }
  return v8;
}
