/*
 * XREFs of sub_1400530F8 @ 0x1400530F8
 * Callers:
 *     sub_1400530B8 @ 0x1400530B8 (sub_1400530B8.c)
 * Callees:
 *     sub_14000D760 @ 0x14000D760 (sub_14000D760.c)
 *     sub_14000EB30 @ 0x14000EB30 (sub_14000EB30.c)
 *     sub_14000EED4 @ 0x14000EED4 (sub_14000EED4.c)
 *     sub_140028D00 @ 0x140028D00 (sub_140028D00.c)
 *     sub_140055FD0 @ 0x140055FD0 (sub_140055FD0.c)
 */

__int64 __fastcall sub_1400530F8(__int64 a1)
{
  KIRQL v2; // bp
  union _SLIST_HEADER *v3; // rax
  __int64 v4; // rbx
  ULONGLONG Alignment; // rcx
  _QWORD *Region; // rax
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  __int64 v10; // rax

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  sub_140028D00((struct _EX_RUNDOWN_REF *)a1, 1);
  v3 = sub_14000EB30((union _SLIST_HEADER *)a1);
  v4 = (__int64)v3;
  if ( !v3 )
    goto LABEL_15;
  if ( *(_QWORD *)(a1 + 144) == a1 + 144 )
  {
    ExpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 112));
  }
  else
  {
    Alignment = v3->Alignment;
    if ( *(union _SLIST_HEADER **)(v3->Alignment + 8) != v3 )
      goto LABEL_16;
    Region = (_QWORD *)v3->Region;
    if ( *Region != v4 )
      goto LABEL_16;
    *Region = Alignment;
    *(_QWORD *)(Alignment + 8) = Region;
  }
  if ( (*(_BYTE *)(v4 + 22) & 0x20) != 0 )
  {
    v7 = (_QWORD *)sub_140055FD0(v4);
    v8 = *v7;
    if ( *(_QWORD **)(*v7 + 8LL) == v7 )
    {
      v9 = (_QWORD *)v7[1];
      if ( (_QWORD *)*v9 == v7 )
      {
        *v9 = v8;
        *(_QWORD *)(v8 + 8) = v9;
        goto LABEL_11;
      }
    }
LABEL_16:
    __fastfail(3u);
  }
LABEL_11:
  *(_BYTE *)(v4 + 20) &= 0xFCu;
  sub_14000EED4(a1, v4);
  if ( (*(_BYTE *)(v4 + 20) & 4) != 0 )
  {
    v10 = *(_QWORD *)(a1 - 720 + 32);
    if ( v10 )
    {
      if ( (*(_DWORD *)(v10 + 80) & 0x100) != 0 )
        sub_14000D760(a1 - 720, 0);
    }
  }
LABEL_15:
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v2);
  return v4;
}
