/*
 * XREFs of sub_1400A1550 @ 0x1400A1550
 * Callers:
 *     sub_14009281C @ 0x14009281C (sub_14009281C.c)
 *     sub_140092CC8 @ 0x140092CC8 (sub_140092CC8.c)
 *     sub_14018213C @ 0x14018213C (sub_14018213C.c)
 * Callees:
 *     sub_140133DE4 @ 0x140133DE4 (sub_140133DE4.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_1400A1550(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rcx
  unsigned int v4; // edi
  void (*v5)(void); // rax

  v1 = *(_DWORD *)(a1 + 104);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = 0;
  if ( v3 )
    v4 = sub_140133DE4(*(unsigned int *)(v3 + 56), (unsigned __int8)v1, BYTE1(v1), BYTE2(v1));
  if ( *(_QWORD *)(a1 + 3544) )
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 3536), 0);
  if ( *(_QWORD *)(a1 + 1968) && (*(_BYTE *)(a1 + 506) & 8) != 0 )
  {
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 1960), 0);
    *(_BYTE *)(a1 + 506) &= ~8u;
  }
  if ( *(_QWORD *)(a1 + 2088) )
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 2080), 0);
  v5 = *(void (**)(void))(a1 + 1024);
  if ( v5 && *(_QWORD *)(a1 + 952) )
  {
    v5();
    memset_0((void *)(a1 + 944), 0, 0x58uLL);
  }
  return v4;
}
