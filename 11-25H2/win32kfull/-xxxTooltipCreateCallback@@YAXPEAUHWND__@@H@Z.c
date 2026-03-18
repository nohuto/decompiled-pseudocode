/*
 * XREFs of ?xxxTooltipCreateCallback@@YAXPEAUHWND__@@H@Z @ 0x14026C044
 * Callers:
 *     xxxProcessEventMessage @ 0x14024572C (xxxProcessEventMessage.c)
 * Callees:
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z @ 0x14002C0F0 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x14002C740 (PopAndFreeW32ThreadLock.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     ?xxxCreateTooltip@@YAXPEAUtagDESKTOP@@PEAUtagWND@@H@Z @ 0x14025D178 (-xxxCreateTooltip@@YAXPEAUtagDESKTOP@@PEAUtagWND@@H@Z.c)
 */

void __fastcall xxxTooltipCreateCallback(__int64 a1, __int64 a2)
{
  int v2; // esi
  __int64 v3; // rax
  struct tagWND *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdx
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = a2;
  LOBYTE(a2) = 1;
  v3 = HMValidateHandleNoSecure(a1, a2);
  v4 = (struct tagWND *)v3;
  if ( v3 )
  {
    v5 = *(_QWORD *)(v3 + 16);
    v6 = *(_QWORD *)(v5 + 496);
    if ( *(_QWORD *)(v6 + 192) == v3 && *(_DWORD *)(v6 + 200) == v2 )
    {
      Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v8, *(void **)(v5 + 496));
      xxxCreateTooltip((struct tagDESKTOP *)v6, v4, v2);
      if ( v8[2] != -1LL )
        PopAndFreeW32ThreadLock((__int64)v8, v7);
    }
  }
}
