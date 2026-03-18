/*
 * XREFs of HalpDmaGetReservedRegionsForDeviceResources @ 0x14058A82C
 * Callers:
 *     HalpDmaAllocateDomain @ 0x14058A460 (HalpDmaAllocateDomain.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     HalpMmAllocCtxAlloc @ 0x140357FFC (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x140359004 (HalpMmAllocCtxFree.c)
 *     RtlCmDecodeMemIoResource @ 0x1404D4880 (RtlCmDecodeMemIoResource.c)
 *     HalpDmaGetIommuInterface @ 0x140578E28 (HalpDmaGetIommuInterface.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     IoGetDeviceProperty @ 0x140994C70 (IoGetDeviceProperty.c)
 */

__int64 __fastcall HalpDmaGetReservedRegionsForDeviceResources(struct _DEVICE_OBJECT *Object, int a2)
{
  struct _DEVICE_OBJECT *v2; // rsi
  __int64 v3; // rdi
  int v4; // r13d
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  _DWORD *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  char *v11; // rax
  __int64 v12; // r9
  unsigned int v13; // edx
  __int64 v14; // r8
  __int64 v15; // r14
  __int64 v16; // r15
  _DWORD *v17; // r12
  unsigned int v18; // ebx
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v19; // rcx
  ULONGLONG v20; // rax
  __int64 v21; // r8
  ULONGLONG v22; // rcx
  ULONGLONG v23; // r9
  unsigned __int64 v24; // rcx
  ULONGLONG Start; // [rsp+30h] [rbp-49h] BYREF
  char *v27; // [rsp+38h] [rbp-41h]
  _BYTE v28[8]; // [rsp+40h] [rbp-39h] BYREF
  __int64 v29; // [rsp+48h] [rbp-31h]
  __int64 v30; // [rsp+88h] [rbp+Fh]
  struct _DEVICE_OBJECT *v31; // [rsp+E0h] [rbp+67h]
  ULONG BufferLength; // [rsp+F0h] [rbp+77h] BYREF
  unsigned int v34; // [rsp+F8h] [rbp+7Fh]

  v31 = Object;
  Start = 0LL;
  v2 = Object;
  BufferLength = 0;
  memset_0(v28, 0, 0x50uLL);
  v3 = 0LL;
  v34 = 0;
  v4 = 0;
  if ( (int)HalpDmaGetIommuInterface((__int64)v2, (__int64)v28) >= 0 )
  {
    if ( v30 )
    {
      v2 = (struct _DEVICE_OBJECT *)guard_dispatch_icall_no_overrides(v29, v5);
      v31 = v2;
    }
    if ( IoGetDeviceProperty(v2, DevicePropertyAllocatedResources, 0, 0LL, &BufferLength) == -1073741789 )
    {
      v27 = (char *)HalpMmAllocCtxAlloc(v7, BufferLength);
      v8 = v27;
      if ( v27 )
      {
        if ( IoGetDeviceProperty(v2, DevicePropertyAllocatedResources, BufferLength, v27, &BufferLength) >= 0 )
        {
          v10 = *(unsigned int *)v27;
          if ( (_DWORD)v10 )
          {
            v11 = v27 + 20;
            v12 = (unsigned int)v10;
            do
            {
              v13 = *((_DWORD *)v11 - 1);
              if ( v13 )
              {
                v10 = (__int64)v11;
                v14 = v13;
                do
                {
                  if ( *(_BYTE *)v10 == 3 || *(_BYTE *)v10 == 7 )
                    ++v4;
                  v10 += 20LL;
                  --v14;
                }
                while ( v14 );
              }
              v11 += 36;
              --v12;
            }
            while ( v12 );
          }
          BufferLength = 32 * v4;
          v3 = HalpMmAllocCtxAlloc(v10, (unsigned int)(32 * v4));
          if ( v3 )
          {
            v15 = 0LL;
            if ( *(_DWORD *)v27 )
            {
              do
              {
                v16 = 0LL;
                v17 = &v8[8 * v15 + 3 + (unsigned int)v15];
                if ( v17[1] )
                {
                  v18 = v34;
                  do
                  {
                    v19 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)&v17[4 * v16 + 2 + (unsigned int)v16];
                    if ( ((v19->Type - 3) & 0xFB) == 0 )
                    {
                      v20 = RtlCmDecodeMemIoResource(v19, &Start);
                      v21 = 32LL * v18;
                      if ( a2 == 2 )
                      {
                        v22 = Start;
                        v23 = v20 - (Start & 0xFFFFFF8000000000uLL);
                        Start &= 0xFFFFFF8000000000uLL;
                        *(_QWORD *)(v21 + v3 + 8) = Start;
                        v24 = ((v23 + v22 + 0x7FFFFFFFFFLL) >> 12) & 0xFFFFFF8000000LL;
                      }
                      else
                      {
                        *(_QWORD *)(v21 + v3 + 8) = Start & 0xFFFFFFFFFFFFF000uLL;
                        v24 = ((v20 & 0xFFF) != 0) + (v20 >> 12);
                      }
                      ++v18;
                      *(_QWORD *)(v21 + v3 + 16) = v24;
                      *(_BYTE *)(v21 + v3 + 24) = 0;
                      *(_QWORD *)(v21 + v3) = v3 + 32LL * v18;
                    }
                    v16 = (unsigned int)(v16 + 1);
                  }
                  while ( (unsigned int)v16 < v17[1] );
                  v34 = v18;
                  v8 = v27;
                }
                v15 = (unsigned int)(v15 + 1);
              }
              while ( (unsigned int)v15 < *v8 );
              v2 = v31;
            }
            v9 = 32LL * (unsigned int)(v4 - 1);
            *(_QWORD *)(v9 + v3) = 0LL;
          }
        }
        HalpMmAllocCtxFree(v9, (__int64)v8);
      }
    }
    if ( v2 )
      ObfDereferenceObjectWithTag(v2, 0x746C6644u);
    guard_dispatch_icall_no_overrides(v29, v6);
  }
  return v3;
}
