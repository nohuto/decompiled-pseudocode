/*
 * XREFs of ?vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1400D7CB8
 * Callers:
 *     ?GrepSelectPalette@@YAPEAUHPALETTE__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1400D7A2C (-GrepSelectPalette@@YAPEAUHPALETTE__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 * Callees:
 *     ?HmgShareLockEx@@YAPEAU_BASEOBJECT@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140016E40 (-HmgShareLockEx@@YAPEAU_BASEOBJECT@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z.c)
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x14001C980 (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?bIsPalDefault@XEPALOBJ@@QEBAHXZ @ 0x1400D7EE0 (-bIsPalDefault@XEPALOBJ@@QEBAHXZ.c)
 */

void __fastcall XEPALOBJ::vAddToList(XEPALOBJ *this, struct XDCOBJ *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rax
  struct _BASEOBJECT *v7; // [rsp+20h] [rbp-38h] BYREF
  int v8; // [rsp+28h] [rbp-30h]
  __int64 v9; // [rsp+30h] [rbp-28h]
  __int64 v10; // [rsp+38h] [rbp-20h]
  int v11; // [rsp+40h] [rbp-18h]

  if ( (unsigned int)XEPALOBJ::bIsPalDefault(this) )
  {
    *(_QWORD *)(*(_QWORD *)a2 + 984LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)a2 + 992LL) = 0LL;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)this + 56LL));
    *(_QWORD *)(*(_QWORD *)a2 + 984LL) = *(_QWORD *)(*(_QWORD *)this + 40LL);
    v4 = *(_QWORD *)this;
    *(_QWORD *)(*(_QWORD *)this + 40LL) = **(_QWORD **)a2;
    *(_QWORD *)(*(_QWORD *)a2 + 992LL) = 0LL;
    v5 = *(_QWORD *)(*(_QWORD *)a2 + 984LL);
    if ( v5 )
    {
      v10 = 0LL;
      v8 = 0;
      v11 = 0;
      v9 = *(_QWORD *)(W32GetSessionState(v4) + 88);
      v6 = HmgShareLockEx(v5, 1, 4);
      v7 = (struct _BASEOBJECT *)v6;
      if ( v6 )
        *(_QWORD *)(v6 + 992) = **(_QWORD **)a2;
      XDCOBJ::vAltUnlockNoNullSet(&v7);
    }
  }
}
