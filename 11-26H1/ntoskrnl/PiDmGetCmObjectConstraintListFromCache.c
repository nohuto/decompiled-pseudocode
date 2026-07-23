/*
 * XREFs of PiDmGetCmObjectConstraintListFromCache @ 0x1409636A4
 * Callers:
 *     PiPnpRtlGetFilteredDeviceInterfaceList @ 0x140963508 (PiPnpRtlGetFilteredDeviceInterfaceList.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x140AAE7D8 (PiPnpRtlGetFilteredDeviceList.c)
 * Callees:
 *     _CmMapPnpObjectTypeToCmObjectType @ 0x14096365C (_CmMapPnpObjectTypeToCmObjectType.c)
 *     PiDmGetObject @ 0x1409637D0 (PiDmGetObject.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1409649B0 (PiDmListEnumObjectsWithCallback.c)
 *     PiDmObjectRelease @ 0x140966A60 (PiDmObjectRelease.c)
 */

__int64 __fastcall PiDmGetCmObjectConstraintListFromCache(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _WORD *a5,
        unsigned int a6,
        _DWORD *a7)
{
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // r10
  _DWORD *v12; // r14
  unsigned int v13; // r15d
  _WORD *v14; // rdi
  int Object; // eax
  int v16; // ebx
  __int64 v17; // rax
  _QWORD v19[2]; // [rsp+20h] [rbp-40h] BYREF
  int v20; // [rsp+30h] [rbp-30h]
  int v21; // [rsp+34h] [rbp-2Ch]
  __int128 v22; // [rsp+38h] [rbp-28h] BYREF
  __int128 v23; // [rsp+48h] [rbp-18h]
  PVOID P; // [rsp+A0h] [rbp+40h] BYREF

  v19[1] = a4;
  v21 = 0;
  v19[0] = a3;
  v8 = CmMapPnpObjectTypeToCmObjectType(PiDmListDefs[5 * (int)a1 + 2]);
  v12 = a7;
  v13 = a6;
  v14 = a5;
  v20 = v8;
  *a7 = 0;
  P = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  if ( v13 )
    *v14 = 0;
  Object = PiDmGetObject(*(unsigned int *)(v11 + 8 * v10), v9, &P);
  v16 = Object;
  if ( Object < 0 )
  {
    if ( Object != -1073741772 )
      goto LABEL_10;
    v16 = 0;
  }
  else
  {
    *(_QWORD *)&v22 = PiDmCmObjectMatchCallback;
    *(_QWORD *)&v23 = v14;
    *((_QWORD *)&v22 + 1) = v19;
    *((_QWORD *)&v23 + 1) = v13;
    v16 = PiDmListEnumObjectsWithCallback(a1, P, PiDmGetObjectListCallback, &v22);
    if ( v16 < 0 )
      goto LABEL_10;
    *v12 = HIDWORD(v23);
  }
  v17 = (unsigned int)*v12;
  if ( (_DWORD)v17 )
  {
    *v12 = v17 + 1;
    if ( v14 && v13 >= (int)v17 + 1 )
      v14[v17] = 0;
    else
      v16 = -1073741789;
  }
LABEL_10:
  if ( P )
    PiDmObjectRelease(P);
  return (unsigned int)v16;
}
