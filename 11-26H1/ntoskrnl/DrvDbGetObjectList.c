/*
 * XREFs of DrvDbGetObjectList @ 0x140AFCFE0
 * Callers:
 *     DrvDbDispatchDeviceId @ 0x140975E30 (DrvDbDispatchDeviceId.c)
 *     DrvDbDispatchDriverInfFile @ 0x1409766E0 (DrvDbDispatchDriverInfFile.c)
 *     DrvDbDispatchDriverPackage @ 0x140976AC0 (DrvDbDispatchDriverPackage.c)
 *     DrvDbDispatchDriverFile @ 0x140B57EB0 (DrvDbDispatchDriverFile.c)
 * Callees:
 *     DrvDbReleaseDatabaseNodeBaseKey @ 0x140977EEC (DrvDbReleaseDatabaseNodeBaseKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1409786A0 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbGetObjectSubKeyList @ 0x140AFD1DC (DrvDbGetObjectSubKeyList.c)
 */

__int64 __fastcall DrvDbGetObjectList(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        _DWORD *a7,
        int a8)
{
  _DWORD *v8; // r14
  int v9; // r15d
  int v10; // r13d
  __int64 v11; // r8
  int ObjectSubKeyList; // ebx
  __int64 v14; // rdx
  unsigned int v15; // r12d
  __int64 v16; // r15
  __int64 *v17; // r13
  __int64 *v18; // rsi
  int v19; // eax
  __int64 v20; // r8
  int v21; // ecx
  __int64 v22; // rcx
  __int64 v23; // rsi
  int v25; // eax
  HANDLE v26; // [rsp+40h] [rbp-18h] BYREF
  __int64 *v27; // [rsp+48h] [rbp-10h]
  int v28; // [rsp+A0h] [rbp+48h] BYREF
  unsigned int v29; // [rsp+A8h] [rbp+50h]
  __int64 v30; // [rsp+B0h] [rbp+58h]
  __int64 v31; // [rsp+B8h] [rbp+60h]

  v31 = a4;
  v30 = a3;
  v29 = a2;
  v8 = a7;
  v9 = a4;
  v10 = a3;
  v11 = a2;
  v26 = 0LL;
  v27 = 0LL;
  *a7 = 0;
  ObjectSubKeyList = 0;
  v14 = a1[6];
  v15 = 0;
  v28 = 0;
  if ( v14 )
  {
    v23 = v14;
    v25 = DrvDbAcquireDatabaseNodeBaseKey(a1, v14, v11, &v26);
    ObjectSubKeyList = v25;
    if ( v25 < 0 )
    {
      if ( v25 == -1073740697 )
        ObjectSubKeyList = -1073741766;
    }
    else
    {
      ObjectSubKeyList = DrvDbGetObjectSubKeyList(*a1, (_DWORD)v26, v10, v9, a5, a6, (__int64)v8, a8);
    }
  }
  else
  {
    v16 = a5;
    v17 = a1 + 2;
    v18 = (__int64 *)a1[2];
    while ( v18 != v17 )
    {
      v27 = v18;
      v19 = DrvDbAcquireDatabaseNodeBaseKey(a1, (__int64)v18, v11, &v26);
      ObjectSubKeyList = v19;
      if ( v19 == -1073740697 )
      {
        ObjectSubKeyList = 0;
      }
      else
      {
        if ( v19 < 0 )
          break;
        ObjectSubKeyList = DrvDbGetObjectSubKeyList(
                             *a1,
                             (_DWORD)v26,
                             v30,
                             v31,
                             v16 + 2LL * v15,
                             a6 - v15,
                             (__int64)&v28,
                             a8);
        DrvDbReleaseDatabaseNodeBaseKey((__int64)a1, (__int64)v18, v20, v26);
        v21 = v28;
        v26 = 0LL;
        if ( v28 )
          v21 = --v28;
        if ( v16 && v15 + v21 < a6 )
          v15 += v21;
        *v8 += v21;
        if ( (int)(ObjectSubKeyList + 0x80000000) >= 0 && ObjectSubKeyList != -1073741789 )
          break;
      }
      v18 = (__int64 *)*v18;
      v11 = v29;
    }
    v22 = (unsigned int)*v8;
    *v8 = v22 + 1;
    if ( ObjectSubKeyList >= 0 )
    {
      if ( v16 && (int)v22 + 1 <= a6 )
        *(_WORD *)(v16 + 2 * v22) = 0;
      else
        ObjectSubKeyList = -1073741789;
    }
    v23 = (__int64)v27;
  }
  if ( v26 )
    DrvDbReleaseDatabaseNodeBaseKey((__int64)a1, v23, v11, v26);
  return (unsigned int)ObjectSubKeyList;
}
