/*
 * XREFs of ndisIfUpdateSingleField @ 0x1400CE6CC
 * Callers:
 *     ndisIfUpdateExternalInterface @ 0x1400CE2B0 (ndisIfUpdateExternalInterface.c)
 * Callees:
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     memcmp @ 0x1400EA9E0 (memcmp.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x140163D60 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

int __fastcall ndisIfUpdateSingleField(__int64 a1, const void *a2, char *a3, size_t a4)
{
  int v4; // esi
  char *v5; // rbx
  int result; // eax
  _QWORD v10[2]; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+30h] [rbp-18h]
  int v12; // [rsp+34h] [rbp-14h]

  v4 = (int)a3;
  v5 = &a3[a1 + 576];
  if ( !a1 )
    v5 = a3;
  result = memcmp(v5, a2, a4);
  if ( result )
  {
    memmove(v5, a2, a4);
    v10[0] = 1LL;
    v10[1] = v5;
    v11 = a4;
    v12 = v4;
    return ndisNsiNotifyClientInterfaceChange(a1, 0LL, v10, 1LL);
  }
  return result;
}
