/*
 * XREFs of ?CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z @ 0x18004C9F4
 * Callers:
 *     ?EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z @ 0x18007AE6C (-EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z.c)
 * Callees:
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z @ 0x18004CB00 (-DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z.c)
 *     ?CreateDesktopWindowReplacement@CDesktopManager@@SAX_K@Z @ 0x18004CB60 (-CreateDesktopWindowReplacement@CDesktopManager@@SAX_K@Z.c)
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x18004D0EC (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 */

void __fastcall CWindowList::CreateOrDestroyDesktopWindowReplacementForDesktops(CWindowList *this, char a2)
{
  struct _RTL_GENERIC_TABLE *i; // rcx
  unsigned __int64 v5; // rcx
  unsigned __int64 *v6; // rax
  unsigned __int64 *v7; // rbx
  CBaseObject *v8; // rcx
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  RestartKey = 0LL;
  for ( i = (struct _RTL_GENERIC_TABLE *)((char *)this + 8); ; i = (struct _RTL_GENERIC_TABLE *)((char *)this + 8) )
  {
    v6 = (unsigned __int64 *)RtlEnumerateGenericTableWithoutSplaying(i, &RestartKey);
    v7 = v6;
    if ( !v6 )
      break;
    if ( *((_BYTE *)v6 + 72) )
    {
      v5 = *v6;
      if ( a2 )
      {
        CDesktopManager::CreateDesktopWindowReplacement(v5);
        if ( !*((_QWORD *)this + 69) && CDesktopManager::IsLogonDesktop(*v7) )
        {
          *((_QWORD *)this + 69) = v7[3];
          v8 = (CBaseObject *)v7[3];
          if ( v8 )
            CBaseObject::AddRef(v8);
        }
      }
      else
      {
        CDesktopManager::DestroyDesktopWindowReplacement(v5);
      }
    }
  }
}
