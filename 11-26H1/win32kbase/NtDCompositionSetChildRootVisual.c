/*
 * XREFs of NtDCompositionSetChildRootVisual @ 0x140229800
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1400579A8 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     OpenDwmHandle @ 0x1400B2D14 (OpenDwmHandle.c)
 *     UserReferenceDwmApiPort @ 0x1400B2FC0 (UserReferenceDwmApiPort.c)
 *     GreUnlockDwmState @ 0x1400B3070 (GreUnlockDwmState.c)
 *     GreLockDwmState @ 0x1400B3150 (GreLockDwmState.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtDCompositionSetChildRootVisual(__int64 a1, void *a2)
{
  PVOID v2; // rbx
  int v3; // edi
  __int64 v5; // rcx
  __int64 v6; // r9
  PVOID v7; // rsi
  int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 (__fastcall *v11)(__int64, __int64, PVOID); // rax
  int v13; // [rsp+20h] [rbp-18h]
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0LL;
  v3 = 0;
  Object = 0LL;
  if ( !a2 )
    goto LABEL_6;
  v3 = DirectComposition::ResourceObject::ResolveHandle(a2, 1u, 1, (struct DirectComposition::ResourceObject **)&Object);
  if ( v3 < 0 )
    return (unsigned int)v3;
  v2 = Object;
  if ( Object && *((_DWORD *)Object + 9) != 156 )
  {
    v3 = -1073741811;
  }
  else
  {
LABEL_6:
    GreLockDwmState(a1);
    v7 = 0LL;
    Object = 0LL;
    if ( v2 )
    {
      v8 = OpenDwmHandle(v2, ExCompositionObjectType, 3u, v6, v13, &Object);
      v7 = Object;
      v3 = v8;
    }
    if ( v3 >= 0 )
    {
      v9 = UserReferenceDwmApiPort();
      v5 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v10) + 24);
      v11 = *(__int64 (__fastcall **)(__int64, __int64, PVOID))(v5 + 2736);
      if ( v11 )
        v3 = v11(v9, a1, v7);
      else
        v3 = -1073741637;
    }
    GreUnlockDwmState(v5);
  }
  if ( v2 )
    ObfDereferenceObject(v2);
  return (unsigned int)v3;
}
