/*
 * XREFs of ?Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z @ 0x1802045D4
 * Callers:
 *     ??0TabTipAdapter@KeyboardHosting@@QEAA@PEAUIInputExperienceHost@Text@Shell@Internal@Windows@@PEAUIShellKeyboardHostingPolicy@3456@PEAUIDesktopKeyboardHostingPolicy@1456@PEAUIInputInjectionValidityHelper@1456@@Z @ 0x1802937DC (--0TabTipAdapter@KeyboardHosting@@QEAA@PEAUIInputExperienceHost@Text@Shell@Internal@Windows@@PEA.c)
 * Callees:
 *     ?SecurityShim_SharedMessagePortSecurity@SharedMessagePortRefPtr@@SAHPEAPEAX@Z @ 0x180204764 (-SecurityShim_SharedMessagePortSecurity@SharedMessagePortRefPtr@@SAHPEAPEAX@Z.c)
 *     ?Assign@SharedMessagePortRefPtr@@IEAAPEAUIMessagePortStore@@PEAU2@@Z @ 0x1802047BC (-Assign@SharedMessagePortRefPtr@@IEAAPEAUIMessagePortStore@@PEAU2@@Z.c)
 *     McTemplateU0sqq_EventWriteTransfer @ 0x180676360 (McTemplateU0sqq_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SharedMessagePortRefPtr::Initialize(SharedMessagePortRefPtr *a1)
{
  int v2; // eax
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  unsigned int v6; // ebx
  int v7; // r9d
  int v8; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  __int64 (__fastcall *v12)(struct IMessagePortStore *, unsigned __int64, HLOCAL, char *); // r11
  const wchar_t *v13; // rax
  const wchar_t *v14; // rdx
  int v15; // ecx
  HLOCAL hMem; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v18; // [rsp+38h] [rbp-18h] BYREF
  const wchar_t *v19; // [rsp+40h] [rbp-10h]
  struct IMessagePortStore *v20; // [rsp+80h] [rbp+30h] BYREF
  __int64 v21; // [rsp+88h] [rbp+38h] BYREF

  v21 = 0LL;
  v20 = 0LL;
  hMem = 0LL;
  v2 = CoreUIClientCreate(&v21);
  v6 = v2;
  if ( v2 < 0 )
  {
    if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
      goto LABEL_22;
    v7 = 115;
LABEL_4:
    McTemplateU0sqq_EventWriteTransfer(v4, v3, v5, v7, v2);
    goto LABEL_22;
  }
  v2 = (*(__int64 (__fastcall **)(__int64, struct IMessagePortStore **))(*(_QWORD *)v21 + 48LL))(v21, &v20);
  v6 = v2;
  if ( v2 < 0 )
  {
    if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
      goto LABEL_22;
    v7 = 118;
    goto LABEL_4;
  }
  v8 = SharedMessagePortRefPtr::SecurityShim_SharedMessagePortSecurity(&hMem);
  v6 = v8 | 0x10000000;
  if ( v8 >= 0 )
  {
    v12 = *(__int64 (__fastcall **)(struct IMessagePortStore *, unsigned __int64, HLOCAL, char *))(*(_QWORD *)v20 + 24LL);
    v13 = L"Input\\Core.AlpcPort\\Server";
    if ( L"Input\\Core.AlpcPort\\Server" )
    {
      v14 = L"Input\\Core.AlpcPort\\Server";
      v19 = L"Input\\Core.AlpcPort\\Server";
      v15 = 0;
      while ( *v13 )
      {
        ++v13;
        ++v15;
      }
      v18 = v15 | 0x80000000;
    }
    else
    {
      v14 = 0LL;
      v19 = 0LL;
    }
    v2 = v12(v20, (unsigned __int64)&v18 & -(__int64)(v14 != 0LL), hMem, (char *)a1 + 8);
    v6 = v2;
    if ( v2 >= 0 )
    {
      SharedMessagePortRefPtr::Assign(a1, v20);
      goto LABEL_22;
    }
    if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
      goto LABEL_22;
    v7 = 126;
    goto LABEL_4;
  }
  if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
    McTemplateU0sqq_EventWriteTransfer(v10, v9, v11, 121, v8);
LABEL_22:
  if ( v21 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    v21 = 0LL;
  }
  if ( v20 )
  {
    (*(void (__fastcall **)(struct IMessagePortStore *))(*(_QWORD *)v20 + 16LL))(v20);
    v20 = 0LL;
  }
  LocalFree(hMem);
  return v6;
}
