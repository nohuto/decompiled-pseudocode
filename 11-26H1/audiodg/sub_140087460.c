/*
 * XREFs of sub_140087460 @ 0x140087460
 * Callers:
 *     sub_1400875D0 @ 0x1400875D0 (sub_1400875D0.c)
 * Callees:
 *     sub_14001D96C @ 0x14001D96C (sub_14001D96C.c)
 *     sub_140087370 @ 0x140087370 (sub_140087370.c)
 *     sub_140088960 @ 0x140088960 (sub_140088960.c)
 */

void __fastcall sub_140087460(__int64 a1)
{
  __int64 v2; // rcx

  *(_QWORD *)a1 = off_1400BE820;
  *(_QWORD *)(a1 + 8) = off_1400BE920;
  *(_QWORD *)(a1 + 16) = off_1400BE900;
  *(_QWORD *)(a1 + 24) = off_1400BE8E0;
  *(_QWORD *)(a1 + 32) = off_1400BE8B0;
  *(_QWORD *)(a1 + 40) = off_1400BE890;
  *(_QWORD *)(a1 + 48) = off_1400BE870;
  v2 = *(_QWORD *)(a1 + 72);
  if ( v2 )
    sub_140088960(v2, *(unsigned int *)(a1 + 80));
  sub_140087370((__int64 *)(a1 + 72));
  sub_14001D96C((void **)(a1 + 64));
  *(_DWORD *)(a1 + 60) = -1073741823;
}
