/*
 * XREFs of MiMapViewOfSectionExCommon @ 0x1409EDD40
 * Callers:
 *     MmMapViewOfSectionEx @ 0x1404B623C (MmMapViewOfSectionEx.c)
 *     PspMapView @ 0x1404F533C (PspMapView.c)
 *     NtMapViewOfSectionEx @ 0x1409EDA90 (NtMapViewOfSectionEx.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     MiMapViewOfSectionCommon @ 0x140993EA0 (MiMapViewOfSectionCommon.c)
 *     MiMapViewOfSection @ 0x1409941C8 (MiMapViewOfSection.c)
 *     DbgkMapViewOfSection @ 0x1409947C4 (DbgkMapViewOfSection.c)
 *     MiMapExParametersInitialize @ 0x1409EDB10 (MiMapExParametersInitialize.c)
 *     MiMapParametersInitialize @ 0x1409EE0D0 (MiMapParametersInitialize.c)
 *     MiCaptureAllocateMapExtendedParameters @ 0x1409EEE14 (MiCaptureAllocateMapExtendedParameters.c)
 *     EtwTiLogMapExecView @ 0x140ACA21C (EtwTiLogMapExecView.c)
 */

__int64 __fastcall MiMapViewOfSectionExCommon(
        ULONG_PTR a1,
        ULONG_PTR BugCheckParameter1,
        int a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6,
        int a7,
        int a8,
        volatile void *Address,
        int a10,
        int a11,
        __int64 a12,
        char a13,
        int a14)
{
  __int64 result; // rax
  int MapExtendedParameters; // ebx
  int v20; // edx
  __int64 v21; // r9
  PVOID v22; // rcx
  void *v23; // [rsp+20h] [rbp-158h]
  __int64 v24[2]; // [rsp+50h] [rbp-128h] BYREF
  __int128 v25; // [rsp+60h] [rbp-118h] BYREF
  PVOID Object[2]; // [rsp+70h] [rbp-108h]
  int v27; // [rsp+80h] [rbp-F8h]
  _BYTE v28[24]; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v29; // [rsp+A8h] [rbp-D0h]
  char v30; // [rsp+C8h] [rbp-B0h]
  int v31; // [rsp+D0h] [rbp-A8h]
  __int64 v32; // [rsp+D8h] [rbp-A0h]
  _BYTE v33[56]; // [rsp+110h] [rbp-68h] BYREF
  __int64 v34; // [rsp+148h] [rbp-30h]

  memset_0(v28, 0, 0x80uLL);
  *(_OWORD *)v24 = 0LL;
  v25 = 0LL;
  *(_OWORD *)Object = 0LL;
  memset_0(v33, 0, 0x48uLL);
  result = MiMapViewOfSectionCommon(BugCheckParameter1, a1, a3, a4, a6, (unsigned __int64)a5, a8, 0LL, a13, v24);
  if ( (int)result >= 0 )
  {
    MapExtendedParameters = MiCaptureAllocateMapExtendedParameters(Address, v33);
    if ( MapExtendedParameters >= 0 )
    {
      if ( (v34 & 0xFFFFFFFFFFFFFD9FuLL) != 0 )
      {
        MapExtendedParameters = -1073741811;
      }
      else
      {
        MapExtendedParameters = MiMapParametersInitialize(
                                  (unsigned int)v28,
                                  Object[0],
                                  Object[1],
                                  v24[0],
                                  v24[1],
                                  a7,
                                  a8,
                                  0LL,
                                  a14);
        if ( MapExtendedParameters >= 0 )
        {
          MapExtendedParameters = MiMapExParametersInitialize((__int64)v28, v24, (__int64)v33);
          if ( MapExtendedParameters >= 0 )
          {
            v31 = a11;
            v32 = a12;
            MapExtendedParameters = MiMapViewOfSection(
                                      (__int64)Object[0],
                                      (__int64)v28,
                                      (unsigned __int64 *)v24,
                                      0LL,
                                      &v25,
                                      1,
                                      0);
            v27 = MapExtendedParameters;
            if ( MapExtendedParameters >= 0 )
            {
              if ( (v30 & 4) != 0 )
                DbgkMapViewOfSection(
                  (_KPROCESS *)Object[1],
                  (__int64)Object[0],
                  (void *)v24[0],
                  v21,
                  (__int64)v23,
                  0,
                  0);
              v22 = Object[0];
              if ( (*((_DWORD *)Object[0] + 14) & 0x20) == 0 && (BYTE8(v25) & 2) != 0 )
              {
                LOBYTE(v20) = a13;
                EtwTiLogMapExecView(Object[1], v20, v24[0], v29, a7, a8);
                v22 = Object[0];
              }
              if ( !a3 )
              {
                ObfDereferenceObjectWithTag(v22, 0x77566D4Du);
                ObfDereferenceObjectWithTag(Object[1], 0x77566D4Du);
              }
              if ( a13 )
                RtlWriteULong64ToUser(a4, v24[0]);
              else
                *a4 = v24[0];
              if ( a13 )
                RtlWriteULong64ToUser(a6, v29);
              else
                *a6 = v29;
              if ( a5 )
              {
                if ( a13 )
                  RtlWriteULong64ToUser(a5, v25);
                else
                  *a5 = v25;
              }
              return (unsigned int)MapExtendedParameters;
            }
          }
        }
      }
    }
    if ( v24[0] )
      ++*(_DWORD *)&stru_140E2ED08.SchedulerApcFill5[52];
    else
      ++*(_DWORD *)&stru_140E2ED08.SchedulerApcFill5[48];
    if ( !a3 )
    {
      ObfDereferenceObjectWithTag(Object[0], 0x77566D4Du);
      ObfDereferenceObjectWithTag(Object[1], 0x77566D4Du);
    }
    return (unsigned int)MapExtendedParameters;
  }
  if ( v24[0] )
    ++*(_DWORD *)&stru_140E2ED08.SchedulerApcFill5[52];
  else
    ++*(_DWORD *)&stru_140E2ED08.SchedulerApcFill5[48];
  return result;
}
