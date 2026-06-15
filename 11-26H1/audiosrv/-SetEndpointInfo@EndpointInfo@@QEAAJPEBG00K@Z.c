/*
 * XREFs of ?SetEndpointInfo@EndpointInfo@@QEAAJPEBG00K@Z @ 0x1800F53F0
 * Callers:
 *     ??4EndpointInfo@@QEAAAEAV0@AEBV0@@Z @ 0x1800F0DE0 (--4EndpointInfo@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?GetEndpointInformationFromId@CConstraintModel@@QEAAJPEAUIMMDevice@@AEAVEndpointInfo@@@Z @ 0x180159B78 (-GetEndpointInformationFromId@CConstraintModel@@QEAAJPEAUIMMDevice@@AEAVEndpointInfo@@@Z.c)
 *     ??0EndpointInfo@@QEAA@PEBG00K@Z @ 0x18015C380 (--0EndpointInfo@@QEAA@PEBG00K@Z.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800AC0B8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?erase@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_K@Z @ 0x1800F59E0 (-erase@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_K@Z.c)
 */

__int64 __fastcall EndpointInfo::SetEndpointInfo(
        EndpointInfo *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        unsigned int a5)
{
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r8

  ((void (*)(void))std::wstring::erase)();
  std::wstring::erase((char *)this + 32);
  v9 = -1LL;
  if ( a2 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( a2[v10] );
    std::wstring::assign((char *)this, a2, v10);
  }
  if ( a3 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( a3[v11] );
    std::wstring::assign((char *)this + 32, a3, v11);
  }
  do
    ++v9;
  while ( a4[v9] );
  std::wstring::assign((char *)this + 64, a4, v9);
  *((_DWORD *)this + 24) = a5;
  return 0LL;
}
