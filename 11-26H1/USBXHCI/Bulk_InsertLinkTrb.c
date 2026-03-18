/*
 * XREFs of Bulk_InsertLinkTrb @ 0x14002A29C
 * Callers:
 *     Bulk_Stage_MapIntoRing @ 0x14001A0D0 (Bulk_Stage_MapIntoRing.c)
 * Callees:
 *     <none>
 */

char __fastcall Bulk_InsertLinkTrb(__int64 a1, _QWORD *a2, int a3, char a4)
{
  _QWORD *v4; // rax
  _QWORD *v6; // rbx
  __int64 v9; // rcx
  int v10; // r9d
  unsigned int v11; // r9d
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // r8d
  KIRQL v15; // al
  _QWORD *v16; // rdx
  _QWORD *v17; // r9
  int v19; // r8d

  v4 = a2 + 1;
  v6 = (_QWORD *)a2[1];
  if ( v6 == a2 + 1 )
  {
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
    return 0;
  }
  else
  {
    if ( (_QWORD *)v6[1] != v4 )
      goto LABEL_10;
    v9 = *v6;
    if ( *(_QWORD **)(*v6 + 8LL) != v6 )
      goto LABEL_10;
    *v4 = v9;
    *(_QWORD *)(v9 + 8) = v4;
    v6[1] = v6;
    *v6 = v6;
    v10 = a4 ? 6145 - (*(_DWORD *)(a1 + 200) != 0) : *(_DWORD *)(a1 + 200) & 1 | 0x1800;
    if ( (*(_QWORD *)(*(_QWORD *)(a1 + 40) + 736LL) & 0x800LL) == 0
      && (a4 || (v19 = a3 - 5) != 0 && (unsigned int)(v19 - 1) > 1) )
    {
      v11 = v10 & 0xFFFFFFEF;
    }
    else
    {
      v11 = v10 | 0x10;
    }
    v12 = *(_QWORD *)(a1 + 184);
    v13 = 2LL * *(unsigned int *)(a1 + 192);
    v14 = *(unsigned __int16 *)(a1 + 112) << 22;
    *(_QWORD *)(v12 + 8 * v13) = v6[3];
    *(_DWORD *)(v12 + 8 * v13 + 8) = v14;
    *(_DWORD *)(v12 + 8 * v13 + 12) = v11 & 0xFFFFFFFD;
    v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    v16 = *(_QWORD **)(a1 + 176);
    *(_BYTE *)(a1 + 104) = v15;
    v17 = (_QWORD *)a2[4];
    if ( (_QWORD *)*v17 != a2 + 3 )
LABEL_10:
      __fastfail(3u);
    *v16 = a2 + 3;
    v16[1] = v17;
    *v17 = v16;
    a2[4] = v16;
    *(_QWORD *)(a1 + 176) = v6;
    *(_QWORD *)(a1 + 184) = v6[2];
    *(_DWORD *)(a1 + 192) = 0;
    a2[14] = v6;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
    return 1;
  }
}
