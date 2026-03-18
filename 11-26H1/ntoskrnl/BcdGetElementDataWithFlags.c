/*
 * XREFs of BcdGetElementDataWithFlags @ 0x1409D4B80
 * Callers:
 *     BcdGetElementData @ 0x1409D4B60 (BcdGetElementData.c)
 * Callees:
 *     _ultow_s @ 0x14053B580 (_ultow_s.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     BiConvertElementFormatToValueType @ 0x1409D250C (BiConvertElementFormatToValueType.c)
 *     BiStringFromGUID @ 0x1409D3908 (BiStringFromGUID.c)
 *     BiReleaseBcdSyncMutant @ 0x1409D3F58 (BiReleaseBcdSyncMutant.c)
 *     BiGetObjectIdentifier @ 0x1409D3F80 (BiGetObjectIdentifier.c)
 *     BiAcquireBcdSyncMutant @ 0x1409D415C (BiAcquireBcdSyncMutant.c)
 *     BiLogMessage @ 0x1409D490C (BiLogMessage.c)
 *     BiGetRegistryValue @ 0x1409D5CD4 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x1409D5F14 (BiOpenKey.c)
 *     BiCloseKey @ 0x1409D6368 (BiCloseKey.c)
 *     BiConvertRegistryDataToElement @ 0x140B635D4 (BiConvertRegistryDataToElement.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BcdGetElementDataWithFlags(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  int v7; // eax
  const wchar_t *v8; // rdi
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  HANDLE v12; // r13
  int RegistryValue; // eax
  PVOID v14; // r12
  unsigned int v16; // r8d
  __int64 v17; // rcx
  __int64 v18; // [rsp+20h] [rbp-E0h]
  unsigned int v19; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE v21; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v22; // [rsp+58h] [rbp-A8h]
  PVOID P; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+68h] [rbp-98h] BYREF
  const wchar_t *v25; // [rsp+70h] [rbp-90h]
  _DWORD *v26; // [rsp+78h] [rbp-88h]
  __int64 v27; // [rsp+80h] [rbp-80h]
  GUID v28; // [rsp+88h] [rbp-78h] BYREF
  wchar_t DstBuf[28]; // [rsp+98h] [rbp-68h] BYREF
  char v30; // [rsp+D0h] [rbp-30h] BYREF

  v27 = a4;
  v22 = a2;
  v25 = (const wchar_t *)&v30;
  v26 = a5;
  v24 = 5111808LL;
  v19 = 0;
  v28 = 0LL;
  if ( !a5 || !a4 && *a5 )
    return 3221225485LL;
  v7 = BiAcquireBcdSyncMutant(a1 & 1);
  if ( v7 < 0 )
  {
    BiLogMessage(4LL, L"BcdGetElementDataWithFlags: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v7);
    return v16;
  }
  else
  {
    v21 = 0LL;
    Handle = 0LL;
    P = 0LL;
    v8 = L"N/A";
    if ( (int)BiGetObjectIdentifier(a1, &v28) >= 0 )
    {
      BiStringFromGUID(&v28.Data1, (__int64)&v24);
      v8 = v25;
    }
    v9 = BiOpenKey(a1, L"Elements", 131097LL, &v21);
    v10 = v9;
    if ( v9 < 0 )
    {
      BiLogMessage(
        4LL,
        L"BcdGetElementDataWithFlags: Failed to open elements key.Object: %ws Status: %x",
        v8,
        (unsigned int)v9);
    }
    else if ( ultow_s(a2, DstBuf, 0x16uLL, 16) )
    {
      v10 = -1073741823;
    }
    else
    {
      v11 = BiOpenKey(v21, DstBuf, 131097LL, &Handle);
      v12 = Handle;
      if ( v11 < 0 )
      {
        v17 = 2LL;
        if ( v11 != -1073741772 )
          v17 = 4LL;
        BiLogMessage(
          v17,
          L"BcdGetElementDataWithFlags: Failed to open key.Object: %ws Type: %ws Status: %x",
          v8,
          DstBuf,
          v11);
        v10 = -1073741275;
      }
      else
      {
        LODWORD(Handle) = BiConvertElementFormatToValueType(HIBYTE(a2) & 0xF);
        RegistryValue = BiGetRegistryValue(v12, L"Element", 0LL, (unsigned int)Handle, &P, &v19);
        v14 = P;
        v10 = RegistryValue;
        if ( RegistryValue < 0 )
        {
          LODWORD(v18) = RegistryValue;
          BiLogMessage(
            4LL,
            L"BcdGetElementDataWithFlags: Failed to get registry value.Object: %ws Reg type: %lu Status: %x",
            v8,
            (unsigned int)Handle,
            v18);
        }
        else
        {
          v10 = BiConvertRegistryDataToElement(a1, P, v19, v22, 0, v27, v26);
        }
        if ( v14 )
          ExFreePoolWithTag(v14, 0x4B444342u);
      }
      if ( v12 )
        BiCloseKey(v12);
    }
    if ( v21 )
      BiCloseKey(v21);
    BiReleaseBcdSyncMutant(a1 & 1);
    return v10;
  }
}
