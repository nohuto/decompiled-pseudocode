/*
 * XREFs of ?CreateDevice@RIMDeviceCollection@@MEAAJPEAX0KKPEAPEAVRIMDevice@@@Z @ 0x1800D3270
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall RIMDeviceCollection::CreateDevice(
        RIMDeviceCollection *this,
        void *a2,
        void *a3,
        int a4,
        unsigned int a5,
        struct RIMDevice **a6)
{
  _DWORD *v10; // [rsp+20h] [rbp-18h]

  v10 = operator new(0x30uLL);
  *(_QWORD *)v10 = &RIMDevice::`vftable';
  v10[10] = a5;
  *((_QWORD *)v10 + 1) = a2;
  v10[6] = a4;
  *((_QWORD *)v10 + 2) = a3;
  *((_QWORD *)v10 + 4) = 0LL;
  *a6 = (struct RIMDevice *)v10;
  return 0LL;
}
