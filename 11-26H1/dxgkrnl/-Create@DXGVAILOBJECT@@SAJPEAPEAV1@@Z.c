/*
 * XREFs of ?Create@DXGVAILOBJECT@@SAJPEAPEAV1@@Z @ 0x14020D5EC
 * Callers:
 *     ?InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z @ 0x1401F66FC (-InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z @ 0x140037F10 (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z.c)
 *     ?Create@DxgkCompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4DxgkCompositionObjectType@@KP6AJPEAV1@PEAXPEAPEAVIDxgkCompositionObject@@@Z3PEAPEAX@Z @ 0x14003DD2C (-Create@DxgkCompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4DxgkCompositionObjectType@@KP6AJP.c)
 *     ?AllocateDefaultSecurityDescriptor@DXGVAILOBJECT@@SAJKPEAPEAX@Z @ 0x14020CBC0 (-AllocateDefaultSecurityDescriptor@DXGVAILOBJECT@@SAJKPEAPEAX@Z.c)
 */

__int64 __fastcall DXGVAILOBJECT::Create(struct DXGVAILOBJECT **a1)
{
  int DefaultSecurityDescriptor; // eax
  __int64 v3; // r9
  void *v4; // rsi
  int v5; // ebx
  HANDLE v6; // rcx
  _QWORD v8[6]; // [rsp+50h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+30h] BYREF
  void *v10; // [rsp+B8h] [rbp+38h] BYREF

  *a1 = 0LL;
  v10 = 0LL;
  Handle = 0LL;
  DefaultSecurityDescriptor = DXGVAILOBJECT::AllocateDefaultSecurityDescriptor(0xC0060000, (struct _ACL **)&v10);
  v4 = v10;
  v5 = DefaultSecurityDescriptor;
  if ( DefaultSecurityDescriptor >= 0 )
  {
    v8[0] = 48LL;
    memset(&v8[1], 0, 24);
    v8[4] = v10;
    v8[5] = 0LL;
    v5 = DxgkCompositionObject::Create(
           0LL,
           (__int64)v8,
           0xC0060000,
           v3,
           3,
           144,
           (__int64 (__fastcall *)(PVOID, __int64, char *))DXGVAILOBJECT::ObjectInit,
           0LL,
           &Handle);
    if ( v5 >= 0 )
    {
      v6 = Handle;
      v10 = 0LL;
      *a1 = 0LL;
      v5 = DxgkCompositionObject::ResolveHandle(v6, 0x60000u, 1, 3, &v10);
      if ( v5 < 0 )
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 697;
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 173;
      }
      else
      {
        *a1 = (struct DXGVAILOBJECT *)v10;
      }
    }
    else
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 160;
    }
  }
  else
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 134;
  }
  if ( Handle )
    ObCloseHandle(Handle, 1);
  if ( v4 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v4);
  return (unsigned int)v5;
}
