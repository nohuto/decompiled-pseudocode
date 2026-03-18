/*
 * XREFs of ?DDEImpDecRefInitWorker@@YAXPEAX@Z @ 0x140236620
 * Callers:
 *     <none>
 * Callees:
 *     InternalRemoveProp @ 0x14000FD98 (InternalRemoveProp.c)
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 */

void __fastcall DDEImpDecRefInitWorker(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 UserSessionState; // rax
  __int64 Prop; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _WORD *v8; // rbx
  __int64 v10; // rax

  v3 = HMValidateHandleNoSecure(a1, 1);
  if ( v3 )
  {
    UserSessionState = W32GetUserSessionState(v2, v1);
    Prop = GetProp(v3, *(unsigned __int16 *)(UserSessionState + 41380), 1u);
    v8 = (_WORD *)Prop;
    if ( Prop )
    {
      if ( (*(_WORD *)(Prop + 88))-- == 1 )
      {
        v10 = W32GetUserSessionState(v7, v6);
        InternalRemoveProp(v3, *(unsigned __int16 *)(v10 + 41380), 1u);
        if ( !v8[45] )
        {
          SeDeleteClientSecurity(v8 + 8);
          Win32FreePool(v8);
        }
      }
    }
  }
}
