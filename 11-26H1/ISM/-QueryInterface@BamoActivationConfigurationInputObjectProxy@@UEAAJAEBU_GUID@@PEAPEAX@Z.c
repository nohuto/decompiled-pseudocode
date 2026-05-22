/*
 * XREFs of ?QueryInterface@BamoActivationConfigurationInputObjectProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180050DC0
 * Callers:
 *     ?QueryInterface@BamoActivationConfigurationInputObjectProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801240D0 (-QueryInterface@BamoActivationConfigurationInputObjectProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoActivationConfigurationInputObjectProxy::QueryInterface(
        BamoActivationConfigurationInputObjectProxy *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v5; // rax

  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  v4 = 0;
  if ( v3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_4753c172_9138_4064_8603_1556e98a010f.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_4753c172_9138_4064_8603_1556e98a010f.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_4753c172_9138_4064_8603_1556e98a010f.Data4;
    if ( v5 )
      goto LABEL_8;
  }
  if ( !this )
  {
LABEL_8:
    *a3 = 0LL;
  }
  else
  {
    *a3 = (char *)this + 8;
    if ( this != (BamoActivationConfigurationInputObjectProxy *)-8LL )
    {
      (**(void (__fastcall ***)(BamoActivationConfigurationInputObjectProxy *))this)(this);
      return v4;
    }
  }
  return (unsigned int)-2147467262;
}
