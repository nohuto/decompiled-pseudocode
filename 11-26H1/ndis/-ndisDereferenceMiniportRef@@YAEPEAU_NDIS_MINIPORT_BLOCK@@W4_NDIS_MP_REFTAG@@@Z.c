/*
 * XREFs of ?ndisDereferenceMiniportRef@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140016DC0
 * Callers:
 *     NdisCmCloseAddressFamilyComplete @ 0x140041A50 (NdisCmCloseAddressFamilyComplete.c)
 *     ?ndisIMDeleteIfStackEntry@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14009F348 (-ndisIMDeleteIfStackEntry@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017F540 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ?ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x140014440 (-ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1400178C0 (-ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x140018A70 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008C320 (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

_BOOL8 __fastcall ndisDereferenceMiniportRef(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int8 a2)
{
  __int64 v3; // rbx
  KIRQL v4; // al
  _BYTE *v5; // rdx
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // r10
  KIRQL v7; // bp
  __int64 v8; // r8
  unsigned __int8 j; // al
  char v10; // cl
  bool v11; // zf
  unsigned int v12; // eax
  bool v13; // bl
  NDIS_REFCOUNT_HANDLE__ *v15; // r14
  unsigned int v16; // edx
  int v17; // ecx
  struct _NDIS_REFCOUNT_STACK_BLOCK *i; // rbx

  v3 = a2;
  v4 = KeAcquireSpinLockRaiseToDpc(&a1->Ref.SpinLock);
  RefCountTracker = a1->RefCountTracker;
  v7 = v4;
  if ( RefCountTracker && (unsigned __int64)RefCountTracker - 2 > 1 )
  {
    if ( RefCountTracker == (NDIS_REFCOUNT_HANDLE__ *)1 )
      ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
    if ( (_BYTE)v3 == 0xFF )
    {
      if ( (*(_BYTE *)RefCountTracker & 2) == 0 )
        ndisBugCheckEx(0x1EuLL, 0LL, (ULONG_PTR)a1->RefCountTracker, 0xFFuLL);
      *(_BYTE *)RefCountTracker &= ~2u;
    }
    else
    {
      if ( (unsigned __int8)v3 >= *((_BYTE *)RefCountTracker + 2) )
        ndisBugCheckEx(0x1EuLL, 2uLL, (ULONG_PTR)a1->RefCountTracker, (unsigned int)v3);
      if ( *((_BYTE *)RefCountTracker + 1) )
      {
        if ( *((_BYTE *)RefCountTracker + 1) == 1 )
        {
          v15 = RefCountTracker + 16 * v3;
          v16 = *((_DWORD *)v15 + 16);
          v17 = (unsigned __int16)v16 >> 1;
          if ( v16 >> 17 < 0x3FFE && v17 == (v16 >> 17) + 1 )
          {
            for ( i = (struct _NDIS_REFCOUNT_STACK_BLOCK *)*((_QWORD *)v15 + 1);
                  i;
                  i = (struct _NDIS_REFCOUNT_STACK_BLOCK *)*((_QWORD *)v15 + 1) )
            {
              *((_QWORD *)v15 + 1) = i->Next;
              ndisFreeRefCountStacksInBlock(i);
              ExFreePoolWithTag(i, 0);
            }
            ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v15 + 2));
            *((_DWORD *)v15 + 16) &= 0x10001u;
          }
          else
          {
            if ( v17 == 0 && (v16 & 1) == 0 )
              ndisReportRefcountImbalance((ULONG_PTR)a1->RefCountTracker, v3);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v15 + 2), 0);
          }
        }
      }
      else
      {
        v8 = *((_QWORD *)RefCountTracker + 1);
        if ( v8 )
        {
          for ( j = 0; j < *((_BYTE *)RefCountTracker + 3); ++j )
          {
            v5 = (_BYTE *)(v8 + 2LL * j);
            if ( *v5 == (_BYTE)v3 )
            {
              v10 = v5[1];
              if ( v10 )
              {
                v5[1] = v10 - 1;
                goto LABEL_17;
              }
            }
          }
        }
        if ( !_bittestandreset((signed __int32 *)RefCountTracker + 4, v3) )
          ndisReportRefcountImbalance((ULONG_PTR)RefCountTracker, v3);
      }
    }
  }
LABEL_17:
  v11 = a1->Ref.ReferenceCount == 1;
  v12 = a1->Ref.ReferenceCount - 1;
  a1->Ref.ReferenceCount = v12;
  v13 = v11;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v5,
      20,
      14,
      (struct _GUID *)&WPP_5c1c115ae3d7308ea4dc20929af9c88a_Traceguids,
      (char)a1,
      v12);
  }
  KeReleaseSpinLock(&a1->Ref.SpinLock, v7);
  return v13;
}
