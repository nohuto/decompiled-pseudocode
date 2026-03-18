/*
 * XREFs of ?SetResourceHandleArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIUDCOMPOSITION_PROPERTY_ID@@PEB_K_K@Z @ 0x1401B8BF8
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1400AA7E0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1400ABE60 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1400ABF84 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     DirectComposition::Memory::Allocate_0 @ 0x1400B3D64 (DirectComposition--Memory--Allocate_0.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetResourceHandleArrayProperty(
        DirectComposition::CApplicationChannel *a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int64 a5)
{
  char *v8; // rdi
  int v9; // r8d
  struct DirectComposition::CResourceMarshaler *v10; // r14
  int v11; // ebx
  unsigned int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  _BYTE v18[40]; // [rsp+30h] [rbp-28h] BYREF

  v18[0] = 0;
  v8 = 0LL;
  v10 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(a1, a2);
  if ( v10 )
  {
    if ( a5 )
    {
      v8 = (char *)DirectComposition::Memory::Allocate_0(8 * a5, 0x66624344u, v9);
      if ( !v8 )
        return (unsigned int)-1073741801;
      v12 = 0;
      v13 = 0LL;
      do
      {
        ++v12;
        *(_QWORD *)&v8[8 * v13] = *(_QWORD *)(a4 + 8 * v13);
        v13 = v12;
      }
      while ( v12 < a5 );
    }
    v11 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, _QWORD, char *, unsigned __int64, _BYTE *))(*(_QWORD *)v10 + 264LL))(
            v10,
            a3,
            v8,
            a5,
            v18);
    if ( v11 < 0 )
    {
      if ( v8 )
        GreDeleteFastMutex(v8, v14, v15, v16);
    }
    else if ( v18[0] )
    {
      DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(a1, v10);
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v11;
}
