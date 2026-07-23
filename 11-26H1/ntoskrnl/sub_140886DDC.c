/*
 * XREFs of sub_140886DDC @ 0x140886DDC
 * Callers:
 *     sub_1409EB368 @ 0x1409EB368 (sub_1409EB368.c)
 *     sub_1409EB860 @ 0x1409EB860 (sub_1409EB860.c)
 * Callees:
 *     Feature_58333519__private_IsEnabledDeviceUsageNoInline @ 0x1407184B0 (Feature_58333519__private_IsEnabledDeviceUsageNoInline.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     sub_140B0244C @ 0x140B0244C (sub_140B0244C.c)
 */

__int64 __fastcall sub_140886DDC(unsigned int *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v6; // r9d
  __int64 v8; // rdx
  unsigned __int64 v9; // r11
  unsigned int v10; // r10d
  _QWORD *v11; // r14
  size_t v12; // rdx
  int v13; // ebx
  int v14; // edx
  unsigned int v15; // eax

  v6 = a1[2];
  v8 = *a1;
  v9 = v8 * v6;
  if ( v9 > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  v10 = v6 + a1[6];
  if ( v10 < v6 || v8 * (unsigned __int64)v10 > 0xFFFFFFFF )
  {
    return (unsigned int)-1073741675;
  }
  else
  {
    v11 = a1 + 4;
    if ( a1[1] + 1 < v6 )
      v12 = v6 * (unsigned int)v8;
    else
      v12 = (unsigned int)v9;
    v13 = sub_140B0244C(*((void **)a1 + 2), v12);
    if ( v13 >= 0 )
    {
      v14 = a1[2] + a1[6];
      v15 = a1[1];
      a1[2] = v14;
      if ( a4 <= v15 && v14 )
      {
        memmove((void *)(*v11 + (a4 + 1) * *a1), (const void *)(*v11 + a4 * *a1), *a1 * (v15 - a4));
        if ( (unsigned int)Feature_58333519__private_IsEnabledDeviceUsageNoInline() )
          _InterlockedIncrement((volatile signed __int32 *)a1 + 1);
        else
          ++a1[1];
        *(_QWORD *)(*a1 * a4 + *v11) = a2;
      }
      else
      {
        return (unsigned int)-1073741811;
      }
    }
  }
  return (unsigned int)v13;
}
