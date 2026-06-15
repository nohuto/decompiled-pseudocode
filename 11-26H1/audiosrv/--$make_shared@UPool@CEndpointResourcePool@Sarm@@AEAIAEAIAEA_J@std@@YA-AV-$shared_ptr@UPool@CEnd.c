/*
 * XREFs of ??$make_shared@UPool@CEndpointResourcePool@Sarm@@AEAIAEAIAEA_J@std@@YA?AV?$shared_ptr@UPool@CEndpointResourcePool@Sarm@@@0@AEAI0AEA_J@Z @ 0x1801274C0
 * Callers:
 *     ?Initialize@CEndpointResourcePool@Sarm@@QEAAJPEAUISaDeviceProxy@@PEAU__POSITION@@@Z @ 0x1801276B8 (-Initialize@CEndpointResourcePool@Sarm@@QEAAJPEAUISaDeviceProxy@@PEAU__POSITION@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001E210 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_shared<Sarm::CEndpointResourcePool::Pool,unsigned int &,unsigned int &,__int64 &>(
        _QWORD *a1,
        int *a2,
        unsigned int *a3,
        __int64 *a4)
{
  _DWORD *v8; // rax
  _DWORD *v9; // r10
  __int64 v10; // rax
  unsigned int v11; // edx
  int v12; // ecx
  _QWORD *result; // rax

  v8 = operator new(0x30uLL);
  v9 = v8;
  if ( v8 )
  {
    v8[2] = 1;
    v8[3] = 1;
    *(_QWORD *)v8 = &std::_Ref_count_obj2<Sarm::CEndpointResourcePool::Pool>::`vftable';
    v10 = *a4;
    v11 = *a3;
    v12 = *a2;
    *((_QWORD *)v9 + 2) = 1500000LL;
    *((_QWORD *)v9 + 3) = 0LL;
    v9[8] = v12;
    *(_QWORD *)(v9 + 9) = v11;
    if ( v10 > 0 )
      *((_QWORD *)v9 + 3) = 100000
                          * (((__int64)((unsigned __int128)((v10 + 99999) * (__int128)0x29F16B11C6D1E109LL) >> 64) >> 14)
                           + ((unsigned __int64)((unsigned __int128)((v10 + 99999) * (__int128)0x29F16B11C6D1E109LL) >> 64) >> 63)
                           + 1);
  }
  else
  {
    v9 = 0LL;
  }
  *a1 = v9 + 4;
  result = a1;
  a1[1] = v9;
  return result;
}
