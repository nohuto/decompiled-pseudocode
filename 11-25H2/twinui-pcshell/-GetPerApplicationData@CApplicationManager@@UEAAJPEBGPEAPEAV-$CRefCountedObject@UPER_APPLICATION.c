/*
 * XREFs of ?GetPerApplicationData@CApplicationManager@@UEAAJPEBGPEAPEAV?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@Z @ 0x18013A4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetApplicationData@CApplicationManager@@AEAAJPEBGAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x18013A384 (-_GetApplicationData@CApplicationManager@@AEAAJPEBGAEAV-$ComPtr@V-$CRefCountedObject@UPER_APPLIC.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CApplicationManager::GetPerApplicationData(__int64 a1, const WCHAR *a2, _QWORD *a3)
{
  int ApplicationData; // ebx
  __int64 v5; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v7 = 0LL;
  ApplicationData = CApplicationManager::_GetApplicationData(a1 - 240, a2, &v7);
  if ( ApplicationData < 0 )
  {
    v5 = v7;
  }
  else
  {
    v5 = 0LL;
    *a3 = v7;
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)ApplicationData;
}
