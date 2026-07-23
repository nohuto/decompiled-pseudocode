/*
 * XREFs of RtlpHpLfhOwnerGetSubsegment @ 0x14034B7A0
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x1403FBD90 (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     RtlpHpLfhSubsegmentDelayFreeProcess @ 0x14034B930 (RtlpHpLfhSubsegmentDelayFreeProcess.c)
 */

_QWORD *__fastcall RtlpHpLfhOwnerGetSubsegment(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rdx
  _QWORD *v5; // rax
  _QWORD *v6; // r10
  _QWORD *v7; // rbx
  int v8; // r8d
  __int64 v9; // r8
  _QWORD *v10; // rdx
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  __int64 v16; // rax
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rcx
  _QWORD *v21; // rax
  _QWORD *v22; // [rsp+20h] [rbp-20h] BYREF
  _QWORD *v23; // [rsp+28h] [rbp-18h]
  _QWORD *v24; // [rsp+30h] [rbp-10h] BYREF
  _QWORD **v25; // [rsp+38h] [rbp-8h]

  v25 = &v24;
  v2 = (_QWORD *)(a2 + 24);
  v3 = *(_QWORD **)(a2 + 24);
  v24 = &v24;
  v23 = &v22;
  v5 = &v22;
  v22 = &v22;
  while ( 1 )
  {
    v6 = v3;
    if ( v3 == v2 )
      break;
    v7 = v3;
    v3 = (_QWORD *)*v3;
    v8 = *((unsigned __int16 *)v7 + 9) + *((unsigned __int16 *)v7 + 16);
    if ( v8 )
    {
      if ( v8 != *((unsigned __int16 *)v7 + 17) )
      {
        v9 = 0LL;
        v10 = v7;
LABEL_6:
        RtlpHpLfhSubsegmentDelayFreeProcess(a1, v10, v9);
        v5 = v22;
        goto LABEL_7;
      }
      v19 = *v6;
      if ( *(_QWORD **)(*v6 + 8LL) != v7 )
        goto LABEL_18;
      v20 = (_QWORD *)v7[1];
      if ( (_QWORD *)*v20 != v7 )
        goto LABEL_18;
      *v20 = v19;
      *(_QWORD *)(v19 + 8) = v20;
      v21 = v22;
      if ( (_QWORD **)v22[1] != &v22 )
        goto LABEL_18;
      *v6 = v22;
      v7[1] = &v22;
      v21[1] = v7;
      v5 = v7;
      v22 = v7;
    }
    else
    {
      v16 = *v6;
      if ( *(_QWORD **)(*v6 + 8LL) != v7
        || (v17 = (_QWORD *)v7[1], (_QWORD *)*v17 != v7)
        || (*v17 = v16, *(_QWORD *)(v16 + 8) = v17, v18 = v25, *v25 != &v24) )
      {
LABEL_18:
        __fastfail(3u);
      }
      v7[1] = v25;
      *v6 = &v24;
      *v18 = v7;
      v5 = v22;
      v25 = (_QWORD **)v7;
    }
  }
  v7 = v5;
  if ( v5 != &v22 )
  {
    v9 = 1LL;
    v10 = v5;
    goto LABEL_6;
  }
  v7 = 0LL;
LABEL_7:
  if ( v5 != &v22 )
  {
    v11 = (_QWORD *)v2[1];
    *v11 = v5;
    v12 = v23;
    v2[1] = v23;
    *v12 = v2;
    v22[1] = v11;
  }
  if ( v24 != &v24 )
  {
    v13 = (_QWORD *)v2[1];
    *v13 = v24;
    v14 = v25;
    v2[1] = v25;
    *v14 = v2;
    v24[1] = v13;
  }
  return v7;
}
