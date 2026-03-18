/*
 * XREFs of PiDevCfgFreeDriverNode @ 0x140ACF14C
 * Callers:
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x1407A8DA0 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1407AA688 (PiDevCfgQueryIncludedDriverNode.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x1407AC218 (PpDevCfgProcessDeviceExtensions.c)
 *     PiDevCfgFreeDriverNode @ 0x140ACF14C (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgFindDeviceDriver @ 0x140ACF544 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgQueryDriverNode @ 0x140AD009C (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgProcessDevice @ 0x140AD089C (PiDevCfgProcessDevice.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x140AD3638 (PiDevCfgQueryIncludedDriverConfigurations.c)
 * Callees:
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     RtlFreeAnsiString @ 0x140A007C0 (RtlFreeAnsiString.c)
 *     PiDevCfgFreeDriverNode @ 0x140ACF14C (PiDevCfgFreeDriverNode.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PiDevCfgFreeDriverNode(__int64 a1)
{
  _QWORD **v2; // rdi
  _QWORD *v3; // rcx
  _QWORD **v4; // rdi
  _QWORD *v5; // rcx
  _QWORD **v6; // rdi
  _QWORD *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rax

  v2 = (_QWORD **)(a1 + 224);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == v2 )
      break;
    if ( (_QWORD **)v3[1] != v2 || (v12 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
FatalListEntryError_11:
      __fastfail(3u);
    *v2 = v12;
    v12[1] = v2;
    PiDevCfgFreeDriverNode(v3);
  }
  v4 = (_QWORD **)(a1 + 208);
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 == v4 )
      break;
    if ( (_QWORD **)v5[1] != v4 )
      goto FatalListEntryError_11;
    v13 = (_QWORD *)*v5;
    if ( *(_QWORD **)(*v5 + 8LL) != v5 )
      goto FatalListEntryError_11;
    *v4 = v13;
    v13[1] = v4;
    PiDevCfgFreeDriverNode(v5);
  }
  v6 = (_QWORD **)(a1 + 384);
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == v6 )
      break;
    if ( (_QWORD **)v7[1] != v6 )
      goto FatalListEntryError_11;
    v14 = (_QWORD *)*v7;
    if ( *(_QWORD **)(*v7 + 8LL) != v7 )
      goto FatalListEntryError_11;
    *v6 = v14;
    v14[1] = v6;
    PiDevCfgFreeDriverNode(v7);
  }
  v8 = *(void **)(a1 + 144);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  v9 = *(void **)(a1 + 16);
  if ( v9 )
    ZwClose(v9);
  v10 = *(void **)(a1 + 24);
  if ( v10 )
    ZwClose(v10);
  v11 = *(void **)(a1 + 32);
  if ( v11 )
    ZwClose(v11);
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 56));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 40));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 72));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 88));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 128));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 160));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 256));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 272));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 288));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 304));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 320));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 336));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 352));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 368));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 424));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 400));
  ExFreePoolWithTag((PVOID)a1, 0);
}
