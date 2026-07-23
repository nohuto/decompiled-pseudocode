/*
 * XREFs of WmipQuerySetExecuteSI @ 0x140A0D9D4
 * Callers:
 *     IoWMISetSingleInstance @ 0x140828320 (IoWMISetSingleInstance.c)
 *     IoWMISetSingleItem @ 0x140828460 (IoWMISetSingleItem.c)
 *     WmipQuerySingleMultiple @ 0x140829764 (WmipQuerySingleMultiple.c)
 *     WmipIoControl @ 0x140A0BC50 (WmipIoControl.c)
 *     IoWMIQuerySingleInstance @ 0x140A0D070 (IoWMIQuerySingleInstance.c)
 *     IoWMIExecuteMethod @ 0x140B30B50 (IoWMIExecuteMethod.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByPointer @ 0x140458E50 (ObReferenceObjectByPointer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     WmipSendWmiIrp @ 0x140A0D8E4 (WmipSendWmiIrp.c)
 *     WmipUnreferenceEntry @ 0x140A0E124 (WmipUnreferenceEntry.c)
 *     WmipForwardWmiIrp @ 0x140A0E218 (WmipForwardWmiIrp.c)
 *     WmipPrepareWnodeSI @ 0x140A0E7D4 (WmipPrepareWnodeSI.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipQuerySetExecuteSI(
        PVOID Object,
        IRP *a2,
        KPROCESSOR_MODE a3,
        unsigned __int8 a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int *v7; // r14
  PVOID v10; // rsi
  __int64 v11; // r12
  ACCESS_MASK v12; // edx
  NTSTATUS v13; // eax
  int v14; // ebx
  __int64 v15; // rcx
  _QWORD *v16; // rsi
  __int64 i; // r14
  __int64 v18; // rcx
  __int64 v19; // rdx
  int v20; // ecx
  ULONG_PTR *p_Information; // rax
  __int64 v22; // r15
  _QWORD *v23; // r14
  void *v25; // rcx
  ULONG_PTR *v26; // rax
  char v27; // [rsp+30h] [rbp-C1h] BYREF
  char v28[7]; // [rsp+31h] [rbp-C0h] BYREF
  PVOID v29; // [rsp+38h] [rbp-B9h] BYREF
  PVOID P; // [rsp+40h] [rbp-B1h] BYREF
  unsigned int *v31; // [rsp+48h] [rbp-A9h]
  PVOID v32; // [rsp+50h] [rbp-A1h]
  __int128 v33; // [rsp+58h] [rbp-99h] BYREF
  _BYTE v34[128]; // [rsp+70h] [rbp-81h] BYREF

  v7 = a7;
  v10 = Object;
  v32 = Object;
  v31 = a7;
  v11 = a4;
  memset_0(v34, 0, sizeof(v34));
  v28[0] = 0;
  v12 = *((_DWORD *)DesiredAccessForFunction + v11);
  v27 = 0;
  v33 = 0LL;
  if ( v10 )
  {
    v13 = ObReferenceObjectByPointer(v10, v12, WmipGuidObjectType, a3);
  }
  else
  {
    v25 = *(void **)(a5 + 16);
    v29 = 0LL;
    v13 = ObReferenceObjectByHandle(v25, v12, WmipGuidObjectType, a3, &v29, 0LL);
    v10 = v29;
    v32 = v29;
  }
  v14 = v13;
  if ( v13 < 0 )
    return (unsigned int)v14;
  LODWORD(v29) = 16;
  P = v34;
  v14 = WmipPrepareWnodeSI((_DWORD)v10, a5, (unsigned int)&v29, (unsigned int)&P, (__int64)v28, (__int64)&v27);
  if ( v14 >= 0 )
  {
    if ( v27 )
    {
      *(_DWORD *)(a5 + 44) |= 0x100u;
      *(_DWORD *)a5 = 48;
      a2->IoStatus.Information = 48LL;
    }
    else if ( v28[0] )
    {
      if ( (_BYTE)v11 == 3 || (v14 = -1073741162, (_BYTE)v11 == 9) )
        v14 = -1073741161;
      v16 = P;
      for ( i = 0LL; (unsigned int)i < (unsigned int)v29; i = (unsigned int)(i + 1) )
      {
        v18 = v16[i];
        v19 = *(unsigned int *)(v18 + 80);
        *(_DWORD *)(a5 + 4) = v19;
        if ( a2 )
        {
          v20 = WmipForwardWmiIrp(a2, a6, a5);
          p_Information = &a2->IoStatus.Information;
        }
        else
        {
          LOBYTE(v18) = v11;
          v20 = WmipSendWmiIrp(v18, v19, a5 + 24, a6, a5, &v33);
          p_Information = (ULONG_PTR *)&v33 + 1;
        }
        if ( v20 >= 0 )
        {
          *v31 = *(_DWORD *)p_Information;
LABEL_15:
          v14 = v20;
          break;
        }
        if ( (unsigned int)(v20 + 1073741163) > 1 )
          goto LABEL_15;
      }
      if ( (_DWORD)v29 )
      {
        v22 = (unsigned int)v29;
        v23 = v16;
        do
        {
          WmipUnreferenceEntry(&WmipISChunkInfo, *v23++);
          --v22;
        }
        while ( v22 );
      }
      if ( v16 != (_QWORD *)v34 && v16 )
        ExFreePoolWithTag(v16, 0);
      if ( v14 < 0 )
        goto LABEL_24;
      v7 = v31;
    }
    else
    {
      if ( a2 )
      {
        v14 = WmipForwardWmiIrp(a2, a6, a5);
        v26 = &a2->IoStatus.Information;
      }
      else
      {
        LOBYTE(v15) = v11;
        v14 = WmipSendWmiIrp(v15, *(unsigned int *)(a5 + 4), a5 + 24, a6, a5, &v33);
        v26 = (ULONG_PTR *)&v33 + 1;
      }
      if ( v14 < 0 )
      {
LABEL_24:
        v10 = v32;
        *(_DWORD *)(a5 + 4) = 0;
        goto LABEL_25;
      }
      *a7 = *(_DWORD *)v26;
    }
    if ( *v7 > a6 )
      v14 = -1073741811;
    goto LABEL_24;
  }
LABEL_25:
  if ( v10 )
    ObfDereferenceObject(v10);
  return (unsigned int)v14;
}
