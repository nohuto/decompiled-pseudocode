/*
 * XREFs of ?ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@@EW4_NDIS_MP_REFTAG@@PEAJPEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14001B760
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1401832D0 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@Z @ 0x14001A8F0 (-ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@.c)
 *     ?ndisValidComponentId@@YAEW4_NDIS_PM_COMPONENT_ID@@@Z @ 0x14001B940 (-ndisValidComponentId@@YAEW4_NDIS_PM_COMPONENT_ID@@@Z.c)
 */

__int64 __fastcall ndisAoAcRefMiniportForIoctl(
        struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *a1,
        unsigned int a2,
        struct _NDIS_PM_NIC_ACTIVE *a3,
        char a4,
        enum _NDIS_MP_REFTAG a5,
        int *a6,
        struct _NDIS_MINIPORT_BLOCK **a7)
{
  struct _NDIS_MINIPORT_BLOCK *v7; // rsi
  unsigned __int8 v8; // r12
  int v12; // ecx
  union _NET_LUID_LH *v13; // r8
  int v14; // eax
  struct _NDIS_MINIPORT_BLOCK *v15; // rax
  struct _NDIS_MINIPORT_AOAC *AoAc; // rbp
  KIRQL v17; // dl
  struct _NDIS_MINIPORT_BLOCK *v18; // rax
  struct _NDIS_MINIPORT_AOAC **v19; // rcx
  struct _NDIS_MINIPORT_AOAC *v20; // rbx
  __int64 result; // rax
  int v22; // eax

  v7 = 0LL;
  v8 = 0;
  if ( !*(_BYTE *)a1 )
  {
    *a6 = -1073741790;
    goto LABEL_21;
  }
  if ( a2 < 0x14 )
  {
    *a6 = -1073741789;
    goto LABEL_21;
  }
  if ( ndisAoAcCapable || ndisAoAcTest )
  {
    if ( !(unsigned __int8)ndisValidComponentId(*((unsigned int *)a3 + 4)) )
    {
      *a6 = -1073741811;
      goto LABEL_21;
    }
    if ( *((_BYTE *)a1 + 40) )
    {
      *a6 = -1073741130;
      goto LABEL_21;
    }
    v14 = *((_DWORD *)a1 + 6);
    if ( v14 != v12 && (v14 || !a4) )
    {
      *a6 = -1073741816;
      goto LABEL_21;
    }
    v15 = ndisReferenceMiniportByNetLuid(v13[1], a5);
    v7 = v15;
    if ( !v15 )
    {
      *a6 = -1071448058;
      goto LABEL_21;
    }
    AoAc = v15->AoAc;
    if ( AoAc )
    {
      v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v15->AoAc);
      if ( *((_DWORD *)a1 + 6) || !a4 )
      {
        if ( *((struct _NDIS_MINIPORT_BLOCK **)a1 + 4) == v7 )
        {
LABEL_20:
          KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v17);
          v8 = 1;
          goto LABEL_21;
        }
      }
      else
      {
        v18 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)a1 + 4);
        if ( !v18 )
        {
          *((_QWORD *)a1 + 4) = v7;
LABEL_15:
          *((_DWORD *)a1 + 6) = *((_DWORD *)a3 + 4);
          v19 = (struct _NDIS_MINIPORT_AOAC **)*((_QWORD *)AoAc + 2);
          v20 = (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)((char *)a1 + 8);
          if ( *v19 != (struct _NDIS_MINIPORT_AOAC *)((char *)AoAc + 8) )
            __fastfail(3u);
          *(_QWORD *)v20 = (char *)AoAc + 8;
          *((_QWORD *)v20 + 1) = v19;
          *v19 = v20;
          *((_QWORD *)AoAc + 2) = v20;
          ++*((_DWORD *)AoAc + 6);
          goto LABEL_20;
        }
        if ( v18 == v7 )
          goto LABEL_15;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v17);
      v22 = -1073741816;
    }
    else
    {
      v22 = -1071447877;
    }
    *a6 = v22;
    ndisDereferenceMiniport(v7, a5);
    v7 = 0LL;
    goto LABEL_21;
  }
  *a6 = 0;
LABEL_21:
  result = v8;
  *a7 = v7;
  return result;
}
