/*
 * XREFs of Isoch_InsertLinkTrb @ 0x14002A100
 * Callers:
 *     Isoch_Stage_MapIntoRing @ 0x14001B410 (Isoch_Stage_MapIntoRing.c)
 * Callees:
 *     <none>
 */

char __fastcall Isoch_InsertLinkTrb(__int64 a1, _QWORD *a2, int a3, char a4)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  __int64 v9; // rcx
  int v10; // r9d
  unsigned int v11; // r9d
  __int64 v12; // rdx
  int v13; // r8d
  _QWORD *v14; // r8
  _QWORD *v15; // rax

  v4 = (_QWORD *)a2[1];
  v5 = a2 + 1;
  if ( v4 == a2 + 1 )
    return 0;
  if ( (_QWORD *)v4[1] != v5 || (v9 = *v4, *(_QWORD **)(*v4 + 8LL) != v4) )
LABEL_10:
    __fastfail(3u);
  *v5 = v9;
  *(_QWORD *)(v9 + 8) = v5;
  v4[1] = v4;
  *v4 = v4;
  if ( a4 )
    v10 = 6145 - (*(_DWORD *)(a1 + 200) != 0);
  else
    v10 = *(_DWORD *)(a1 + 200) & 1 | 0x1800;
  if ( (*(_QWORD *)(*(_QWORD *)(a1 + 40) + 736LL) & 0x800LL) != 0 )
  {
LABEL_14:
    v11 = v10 | 0x10;
    goto LABEL_9;
  }
  if ( !a4 )
  {
    if ( a3 != 7 && (unsigned int)(a3 - 5) >= 2 )
    {
      v11 = v10 & 0xFFFFFFEF;
      goto LABEL_9;
    }
    goto LABEL_14;
  }
  v11 = v10 & 0xFFFFFFEF;
LABEL_9:
  v12 = *(_QWORD *)(a1 + 184) + 16LL * *(unsigned int *)(a1 + 192);
  v13 = *(unsigned __int16 *)(a1 + 112) << 22;
  *(_QWORD *)v12 = v4[3];
  *(_DWORD *)(v12 + 8) = v13;
  *(_DWORD *)(v12 + 12) = v11 & 0xFFFFFFFD;
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v14 = (_QWORD *)a2[4];
  v15 = *(_QWORD **)(a1 + 176);
  if ( (_QWORD *)*v14 != a2 + 3 )
    goto LABEL_10;
  *v15 = a2 + 3;
  v15[1] = v14;
  *v14 = v15;
  a2[4] = v15;
  *(_QWORD *)(a1 + 176) = v4;
  *(_QWORD *)(a1 + 184) = v4[2];
  *(_DWORD *)(a1 + 192) = 0;
  a2[12] = v4;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  return 1;
}
