/*
 * XREFs of ??1?$CDeviceResourceT@V?$CMILCOMBaseT@VIDeviceResource@@V1@VCMilObjectDeleter@@@@@@MEAA@XZ @ 0x18012BF08
 * Callers:
 *     ??1CD3DResource@@MEAA@XZ @ 0x18012BC24 (--1CD3DResource@@MEAA@XZ.c)
 *     ??1CD2DResource@@MEAA@XZ @ 0x18012BE94 (--1CD2DResource@@MEAA@XZ.c)
 * Callees:
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1801513C8 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CDeviceResourceT<CMILCOMBaseT<IDeviceResource,IDeviceResource,CMilObjectDeleter>>::~CDeviceResourceT<CMILCOMBaseT<IDeviceResource,IDeviceResource,CMilObjectDeleter>>(
        _QWORD *a1)
{
  void *v2; // rcx
  __int64 v3; // rdx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  void *v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = (void *)a1[2];
  if ( v2 )
  {
    v3 = a1[4] - (_QWORD)v2;
    v6 = v2;
    v4 = v3 & 0xFFFFFFFFFFFFFFF8uLL;
    v5 = v4;
    if ( v4 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v6, &v5);
      v4 = v5;
      v2 = v6;
    }
    operator delete(v2, v4);
    a1[2] = 0LL;
    a1[3] = 0LL;
    a1[4] = 0LL;
  }
}
