/*
 * XREFs of ?GetPrintableId@EndpointInfo@@QEBAPEBGXZ @ 0x1800F3290
 * Callers:
 *     ?AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU_ResourceInfo@@KKHPEAUResourceHandleInfo@@@Z @ 0x1800F1D7C (-AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU.c)
 *     ?RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@@Z @ 0x1800F5054 (-RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@@Z.c)
 *     ?RevokeEndpointResourcesInGroup@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@H@Z @ 0x1800F5180 (-RevokeEndpointResourcesInGroup@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@H@Z.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall EndpointInfo::GetPrintableId(EndpointInfo *this)
{
  const unsigned __int16 *result; // rax

  if ( *((_QWORD *)this + 2) )
  {
    if ( *((_QWORD *)this + 3) > 7uLL )
      return *(const unsigned __int16 **)this;
    return (const unsigned __int16 *)this;
  }
  else if ( *((_QWORD *)this + 6) )
  {
    result = (const unsigned __int16 *)((char *)this + 32);
    if ( *((_QWORD *)this + 7) > 7uLL )
      return *(const unsigned __int16 **)result;
  }
  else
  {
    return L"n/a";
  }
  return result;
}
