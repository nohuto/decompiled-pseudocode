/*
 * XREFs of KiInsertTimer2WithCollectionLockHeld @ 0x1403789C0
 * Callers:
 *     KiInsertTimer2 @ 0x140337730 (KiInsertTimer2.c)
 *     KeSetTimer2 @ 0x14037A500 (KeSetTimer2.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1403774B0 (RtlRbInsertNodeEx.c)
 *     KiRemoveTimer2 @ 0x140378EB0 (KiRemoveTimer2.c)
 */

__int64 __fastcall KiInsertTimer2WithCollectionLockHeld(__int64 a1, char a2, _BYTE *a3, bool *a4)
{
  char v5; // cl
  unsigned __int8 v7; // r12
  _BYTE *v8; // r14
  int v9; // r15d
  int v10; // ebp
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rsi
  bool v14; // al
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  char v19; // cl
  unsigned __int64 *v20; // rsi
  unsigned __int64 v21; // rdx
  bool v22; // al
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  signed __int32 *v28; // rdx
  bool v29; // al
  signed __int32 v30; // eax
  signed __int32 v31; // ett
  signed __int32 v32[8]; // [rsp+0h] [rbp-58h] BYREF

  v5 = *(_BYTE *)(a1 + 130);
  v7 = 1;
  v8 = a3;
  v9 = 0;
  *a3 = 0;
  v10 = 0;
  *a4 = 0;
  if ( v5 == 23 || (v5 & 0x20) != 0 && *(_QWORD *)(a1 + 72) == *(_QWORD *)(a1 + 80) )
  {
    *(_BYTE *)(a1 + 130) = v5 | 0x10;
    goto LABEL_21;
  }
  *(_BYTE *)(a1 + 130) = v5 & 0xEF;
  v11 = v5 & 7;
  v12 = *((_QWORD *)&KiTimer2Collections + 3 * v11);
  v13 = (unsigned __int64)&KiTimer2Collections + 24 * v11;
  if ( (*(_QWORD *)(v13 + 8) & 1) == 0 )
    goto LABEL_4;
  if ( v12 )
  {
    v12 ^= v13;
LABEL_4:
    v14 = 0;
    if ( v12 )
    {
      while ( 1 )
      {
        while ( *(_QWORD *)(a1 + 72) < *(_QWORD *)(v12 + 48) )
        {
          v15 = *(_QWORD *)v12;
          if ( (*(_QWORD *)(v13 + 8) & 1) != 0 )
          {
            if ( !v15 )
              goto LABEL_66;
            v15 ^= v12;
          }
          if ( !v15 )
            goto LABEL_66;
          v12 = v15;
        }
        v16 = *(_QWORD *)(v12 + 8);
        if ( (*(_QWORD *)(v13 + 8) & 1) != 0 )
        {
          if ( !v16 )
            break;
          v16 ^= v12;
        }
        if ( !v16 )
          break;
        v12 = v16;
      }
      v14 = 1;
    }
    goto LABEL_16;
  }
LABEL_66:
  v14 = 0;
LABEL_16:
  RtlRbInsertNodeEx(v13, v12, v14, a1 + 24);
  v17 = *(_QWORD *)(v13 + 8);
  if ( (v17 & 1) != 0 )
  {
    if ( v17 == 1 )
      v18 = 0LL;
    else
      v18 = v17 ^ (v13 | 1);
  }
  else
  {
    v18 = *(_QWORD *)(v13 + 8);
  }
  if ( v18 == a1 + 24 )
  {
    v10 = 1;
    *(_QWORD *)(v13 + 16) = *(_QWORD *)(a1 + 72);
  }
  else
  {
    v10 = 0;
  }
LABEL_21:
  v19 = *(_BYTE *)(a1 + 131);
  if ( *(_QWORD *)(a1 + 80) == -1LL )
  {
    *(_BYTE *)(a1 + 131) = v19 | 0x10;
    goto LABEL_39;
  }
  *(_BYTE *)(a1 + 131) = v19 & 0xEF;
  v20 = (unsigned __int64 *)(0x140000000LL + 24LL * (v19 & 7) + 15887360);
  v21 = *v20;
  if ( (*(_QWORD *)(0x140000008LL + 24LL * (v19 & 7) + 15887360) & 1) == 0 )
    goto LABEL_23;
  if ( v21 )
  {
    v21 ^= (unsigned __int64)v20;
LABEL_23:
    v22 = 0;
    if ( v21 )
    {
      while ( 1 )
      {
        while ( *(_QWORD *)(a1 + 80) < *(_QWORD *)(v21 + 32) )
        {
          v23 = *(_QWORD *)v21;
          if ( (*(_QWORD *)(0x140000008LL + 24LL * (v19 & 7) + 15887360) & 1) != 0 )
          {
            if ( !v23 )
              goto LABEL_64;
            v23 ^= v21;
          }
          if ( !v23 )
            goto LABEL_64;
          v21 = v23;
        }
        v24 = *(_QWORD *)(v21 + 8);
        if ( (*(_QWORD *)(0x140000008LL + 24LL * (v19 & 7) + 15887360) & 1) != 0 )
        {
          if ( !v24 )
            break;
          v24 ^= v21;
        }
        if ( !v24 )
          break;
        v21 = v24;
      }
      v22 = 1;
    }
    goto LABEL_33;
  }
LABEL_64:
  v22 = 0;
LABEL_33:
  RtlRbInsertNodeEx((unsigned __int64)v20, v21, v22, a1 + 48);
  v25 = v20[1];
  if ( (v25 & 1) != 0 )
  {
    if ( v25 == 1 )
      v26 = 0LL;
    else
      v26 = v25 ^ ((unsigned __int64)v20 | 1);
  }
  else
  {
    v26 = v20[1];
  }
  if ( v26 == a1 + 48 )
  {
    v9 = 1;
    v20[2] = *(_QWORD *)(a1 + 80);
  }
  v8 = a3;
  v10 |= v9;
LABEL_39:
  if ( v10 )
  {
    if ( (unsigned __int64)KiNextTimer2DueTime > *(_QWORD *)(a1 + 72) )
    {
      KiNextTimer2DueTime = *(_QWORD *)(a1 + 72);
      _InterlockedOr(v32, 0);
    }
    if ( *(_QWORD *)(a1 + 72) <= MEMORY[0xFFFFF78000000008] )
    {
      *v8 = 1;
      if ( !a2 )
      {
        KiRemoveTimer2(a1);
        v7 = 0;
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 129) & 4) != 0 && _InterlockedIncrement(&KiHrTimerActiveCount) == 1 )
  {
    v28 = *(signed __int32 **)(KiProcessorBlock[(unsigned int)KiClockTimerOwner] + 36600);
    if ( v28 )
    {
      _m_prefetchw(v28);
      v30 = *v28;
      do
      {
        v31 = v30;
        v30 = _InterlockedCompareExchange(v28, v30 | 0x80000, v30);
      }
      while ( v31 != v30 );
      v29 = (v30 & 0x80000) == 0;
    }
    else
    {
      v29 = 0;
    }
    *a4 = v29;
  }
  return v7;
}
