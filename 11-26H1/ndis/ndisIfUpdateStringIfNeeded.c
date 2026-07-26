/*
 * XREFs of ndisIfUpdateStringIfNeeded @ 0x140146E94
 * Callers:
 *     ndisIfUpdateIfBlockFromPersistedState @ 0x140146BD8 (ndisIfUpdateIfBlockFromPersistedState.c)
 * Callees:
 *     WPP_RECORDER_SF_Z @ 0x140056EF0 (WPP_RECORDER_SF_Z.c)
 *     ?ndisIsValidIfStringParts@@YAEPEB_WK@Z @ 0x140090040 (-ndisIsValidIfStringParts@@YAEPEB_WK@Z.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     memcmp @ 0x1400EA9E0 (memcmp.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x140163D60 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

int __fastcall ndisIfUpdateStringIfNeeded(const wchar_t *a1, const void **a2, _WORD *a3, int a4, int a5)
{
  size_t v5; // rsi
  _UNKNOWN **v10; // rax
  _DWORD v12[2]; // [rsp+30h] [rbp-38h] BYREF
  _WORD *v13; // [rsp+38h] [rbp-30h]
  int v14; // [rsp+40h] [rbp-28h]
  int v15; // [rsp+44h] [rbp-24h]

  v5 = *(unsigned __int16 *)a2;
  if ( (_WORD)v5 != *a3 || (LODWORD(v10) = memcmp(a2[1], a3 + 1, *(unsigned __int16 *)a2), (_DWORD)v10) )
  {
    if ( ndisIsValidIfStringParts(a1, v5) )
    {
      memmove(a3 + 1, a2[1], v5);
      *a3 = *(_WORD *)a2;
      v15 = a5;
      v12[1] = 0;
      v12[0] = a4;
      v13 = a3;
      v14 = 516;
      LODWORD(v10) = ndisNsiNotifyClientInterfaceChange(a1, 0LL, v12, 0LL);
    }
    else
    {
      v10 = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        LODWORD(v10) = WPP_RECORDER_SF_Z(
                         *((_QWORD *)WPP_GLOBAL_Control + 8),
                         3u,
                         0x16u,
                         0x15u,
                         (struct _GUID *)&WPP_84bd40d134543b4dc326a9a718d945dc_Traceguids,
                         (unsigned __int16 *)a2);
    }
  }
  return (int)v10;
}
