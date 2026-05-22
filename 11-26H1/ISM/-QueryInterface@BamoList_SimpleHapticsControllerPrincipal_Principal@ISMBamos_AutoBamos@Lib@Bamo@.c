/*
 * XREFs of ?QueryInterface@BamoList_SimpleHapticsControllerPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180190280
 * Callers:
 *     ?QueryInterface@BamoList_SimpleHapticsControllerPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180190300 (-QueryInterface@BamoList_SimpleHapticsControllerPrincipal_Principal@ISMBamos_AutoBa_ea_180190300.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal::QueryInterface(
        Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // ebx

  if ( (*(_QWORD *)&a2->Data1 != *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
     || *(_QWORD *)a2->Data4 != *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4)
    && (*(_QWORD *)&a2->Data1 != *(_QWORD *)&GUID_6169f2d4_731b_3822_ba6c_d1787cd99947.Data1
     || *(_QWORD *)a2->Data4 != *(_QWORD *)GUID_6169f2d4_731b_3822_ba6c_d1787cd99947.Data4)
    || (v3 = 0, !this) )
  {
    *a3 = 0LL;
    return (unsigned int)-2147467262;
  }
  *a3 = (char *)this + 8;
  if ( this == (Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal *)-8LL )
    return (unsigned int)-2147467262;
  (**(void (__fastcall ***)(Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal *))this)(this);
  return v3;
}
