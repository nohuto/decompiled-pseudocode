/*
 * XREFs of HalpDmaGetReservedRegionsForDeviceResources @ 0x14058CF5C
 * Callers:
 *     HalpDmaAllocateDomain @ 0x14058CB90 (HalpDmaAllocateDomain.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     HalpMmAllocCtxAlloc @ 0x140359D9C (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x14035ADA4 (HalpMmAllocCtxFree.c)
 *     RtlCmDecodeMemIoResource @ 0x1404CE0F0 (RtlCmDecodeMemIoResource.c)
 *     HalpDmaGetIommuInterface @ 0x14057B358 (HalpDmaGetIommuInterface.c)
 *     Feature_DmaReservedRegionsPdoReference__private_IsEnabledDeviceUsageNoInline @ 0x14058C0A0 (Feature_DmaReservedRegionsPdoReference__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     IoGetDeviceProperty @ 0x1409556D0 (IoGetDeviceProperty.c)
 */

__int64 __fastcall HalpDmaGetReservedRegionsForDeviceResources(__int64 DeviceObject, int a2)
{
  bool v3; // r12
  __int64 v4; // rdi
  struct _DEVICE_OBJECT *v5; // r14
  int v6; // r15d
  char v7; // si
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rcx
  char *v13; // rax
  __int64 v14; // r9
  unsigned int v15; // edx
  __int64 v16; // r8
  unsigned int v17; // r15d
  __int64 v18; // r12
  unsigned int *v19; // r13
  unsigned int v20; // ebx
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v21; // rcx
  ULONGLONG v22; // rax
  __int64 v23; // r8
  ULONGLONG v24; // rcx
  ULONGLONG v25; // r9
  unsigned __int64 v26; // rcx
  __int64 v27; // rdx
  bool v29; // [rsp+30h] [rbp-49h]
  int v30; // [rsp+34h] [rbp-45h]
  ULONGLONG Start; // [rsp+38h] [rbp-41h] BYREF
  __int64 v32; // [rsp+40h] [rbp-39h]
  char *v33; // [rsp+48h] [rbp-31h]
  _BYTE v34[8]; // [rsp+50h] [rbp-29h] BYREF
  __int64 v35; // [rsp+58h] [rbp-21h]
  __int64 v36; // [rsp+98h] [rbp+1Fh]
  ULONG BufferLength; // [rsp+F0h] [rbp+77h] BYREF
  unsigned int v39; // [rsp+F8h] [rbp+7Fh]

  Start = 0LL;
  BufferLength = 0;
  memset_0(v34, 0, 0x50uLL);
  v3 = 0;
  v30 = 0;
  v29 = 0;
  v39 = 0;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0;
  v7 = 0;
  if ( (int)HalpDmaGetIommuInterface(DeviceObject, (__int64)v34) >= 0 )
  {
    v7 = 1;
    if ( v36 )
    {
      v5 = (struct _DEVICE_OBJECT *)guard_dispatch_icall_no_overrides(v35, v8);
      v32 = (__int64)v5;
      v3 = (unsigned int)Feature_DmaReservedRegionsPdoReference__private_IsEnabledDeviceUsageNoInline() != 0;
      v29 = v3;
    }
    else
    {
      v5 = (struct _DEVICE_OBJECT *)DeviceObject;
      v32 = DeviceObject;
    }
    if ( IoGetDeviceProperty(v5, DevicePropertyAllocatedResources, 0, 0LL, &BufferLength) == -1073741789 )
    {
      v33 = (char *)HalpMmAllocCtxAlloc(v9, BufferLength);
      v10 = (unsigned int *)v33;
      if ( v33 )
      {
        if ( IoGetDeviceProperty(v5, DevicePropertyAllocatedResources, BufferLength, v33, &BufferLength) >= 0 )
        {
          v12 = *(unsigned int *)v33;
          if ( (_DWORD)v12 )
          {
            v13 = v33 + 20;
            v14 = (unsigned int)v12;
            do
            {
              v15 = *((_DWORD *)v13 - 1);
              if ( v15 )
              {
                v12 = (__int64)v13;
                v16 = v15;
                do
                {
                  if ( *(_BYTE *)v12 == 3 || *(_BYTE *)v12 == 7 )
                    ++v6;
                  v12 += 20LL;
                  --v16;
                }
                while ( v16 );
                v30 = v6;
              }
              v13 += 36;
              --v14;
            }
            while ( v14 );
          }
          BufferLength = 32 * v6;
          v4 = HalpMmAllocCtxAlloc(v12, (unsigned int)(32 * v6));
          if ( v4 )
          {
            v17 = 0;
            if ( *(_DWORD *)v33 )
            {
              do
              {
                v18 = 0LL;
                v19 = &v10[8 * v17 + 3 + v17];
                if ( v19[1] )
                {
                  v20 = v39;
                  do
                  {
                    v21 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)&v19[4 * v18 + 2 + (unsigned int)v18];
                    if ( ((v21->Type - 3) & 0xFB) == 0 )
                    {
                      v22 = RtlCmDecodeMemIoResource(v21, &Start);
                      v23 = 32LL * v20;
                      if ( a2 == 2 )
                      {
                        v24 = Start;
                        v25 = v22 - (Start & 0xFFFFFF8000000000uLL);
                        Start &= 0xFFFFFF8000000000uLL;
                        *(_QWORD *)(v23 + v4 + 8) = Start;
                        v26 = ((v25 + v24 + 0x7FFFFFFFFFLL) >> 12) & 0xFFFFFF8000000LL;
                      }
                      else
                      {
                        *(_QWORD *)(v23 + v4 + 8) = Start & 0xFFFFFFFFFFFFF000uLL;
                        v26 = ((v22 & 0xFFF) != 0) + (v22 >> 12);
                      }
                      ++v20;
                      *(_QWORD *)(v23 + v4 + 16) = v26;
                      *(_BYTE *)(v23 + v4 + 24) = 0;
                      *(_QWORD *)(v23 + v4) = v4 + 32LL * v20;
                    }
                    v18 = (unsigned int)(v18 + 1);
                  }
                  while ( (unsigned int)v18 < v19[1] );
                  v39 = v20;
                  v10 = (unsigned int *)v33;
                }
                ++v17;
              }
              while ( v17 < *v10 );
              v5 = (struct _DEVICE_OBJECT *)v32;
              v3 = v29;
            }
            v11 = 32LL * (unsigned int)(v30 - 1);
            *(_QWORD *)(v11 + v4) = 0LL;
          }
        }
        HalpMmAllocCtxFree(v11, (__int64)v10);
      }
    }
  }
  if ( !(unsigned int)Feature_DmaReservedRegionsPdoReference__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v5 )
      goto LABEL_38;
    goto LABEL_37;
  }
  if ( v3 )
LABEL_37:
    ObfDereferenceObjectWithTag(v5, 0x746C6644u);
LABEL_38:
  if ( v7 )
    guard_dispatch_icall_no_overrides(v35, v27);
  return v4;
}
