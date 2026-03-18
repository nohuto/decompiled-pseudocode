/*
 * XREFs of ?hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x1401A0398
 * Callers:
 *     GreZorderSprite @ 0x14008FC58 (GreZorderSprite.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x140091F30 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x140093B24 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMSPRITEREF::hspLookupWindow(Gre::Base *a1)
{
  __int64 v1; // rdi
  struct Gre::Base::SESSION_GLOBALS *v2; // rsi
  struct W32_PUSH_LOCK *v3; // rbx
  _QWORD *v4; // rax
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[1] = 0LL;
  v1 = 0LL;
  Buffer[0] = a1;
  v2 = Gre::Base::Globals(a1);
  v3 = (struct W32_PUSH_LOCK *)(*((_QWORD *)v2 + 17) + 72LL);
  if ( *((_QWORD *)v2 + 17) != -72LL )
    GreAcquirePushLockExclusive(v3);
  v4 = RtlLookupElementGenericTable(*((PRTL_GENERIC_TABLE *)v2 + 17), Buffer);
  if ( v4 )
    v1 = v4[1];
  if ( v3 )
    GreReleasePushLockExclusive(v3);
  return v1;
}
