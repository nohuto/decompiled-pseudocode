/*
 * XREFs of ?ImeCanDestroyDefIMEforChild@@YAHPEAUtagWND@@0@Z @ 0x14017E888
 * Callers:
 *     ?xxxDW_DestroyIMEWindowIfRequired@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14017E740 (-xxxDW_DestroyIMEWindowIfRequired@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     ?xxxFW_DestroyIMEWindowIfRequired@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1402B5EDC (-xxxFW_DestroyIMEWindowIfRequired@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     _GetDesktopWindow @ 0x140034670 (_GetDesktopWindow.c)
 *     ?IsChildSameThread@@YAHPEAUtagWND@@0@Z @ 0x140282238 (-IsChildSameThread@@YAHPEAUtagWND@@0@Z.c)
 *     unsafe_cast_fnid_or_class_to_PIMEWND @ 0x140285E98 (unsafe_cast_fnid_or_class_to_PIMEWND.c)
 */

__int64 __fastcall ImeCanDestroyDefIMEforChild(struct tagWND **a1, struct tagWND *a2)
{
  ULONG64 v4; // rcx
  struct tagWND *v6; // rax
  __int64 v7; // rbx
  struct tagWND *v8; // rcx
  ULONG64 v9; // [rsp+60h] [rbp+18h]
  ULONG64 *v10; // [rsp+68h] [rbp+20h]

  v10 = (ULONG64 *)unsafe_cast_fnid_or_class_to_PIMEWND(a1);
  if ( !v10 )
    return 0LL;
  v9 = *v10;
  if ( !*v10 || v9 == -1LL )
    return 0LL;
  v4 = MmUserProbeAddress;
  if ( v9 < MmUserProbeAddress )
    v4 = *v10;
  if ( (*(_DWORD *)(v4 + 44) & 0x10) == 0 )
    return 0LL;
  v6 = a1[15];
  if ( v6 )
  {
    if ( v6 != a2 )
      return 0LL;
  }
  v7 = *((_QWORD *)a2 + 13);
  if ( !v7 || *((_QWORD *)a2 + 2) == *(_QWORD *)(v7 + 16) )
    return 0LL;
  while ( v7 && v7 != GetDesktopWindow(v7) )
  {
    if ( (unsigned int)IsChildSameThread(v8, a2) )
      return 0LL;
    v7 = *(_QWORD *)(v7 + 104);
  }
  return 1LL;
}
