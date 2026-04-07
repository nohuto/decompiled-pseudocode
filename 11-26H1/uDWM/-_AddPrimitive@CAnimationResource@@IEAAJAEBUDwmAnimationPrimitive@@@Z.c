/*
 * XREFs of ?_AddPrimitive@CAnimationResource@@IEAAJAEBUDwmAnimationPrimitive@@@Z @ 0x180050940
 * Callers:
 *     ?End@CAnimationResource@@UEAAJNM@Z @ 0x1800507E0 (-End@CAnimationResource@@UEAAJNM@Z.c)
 *     ?AddCubic@CAnimationResource@@UEAAJNMMMM@Z @ 0x180050880 (-AddCubic@CAnimationResource@@UEAAJNMMMM@Z.c)
 *     ?AddRepeat@CAnimationResource@@UEAAJNN@Z @ 0x180099D50 (-AddRepeat@CAnimationResource@@UEAAJNN@Z.c)
 *     ?AddSinusoidal@CAnimationResource@@UEAAJNMMMM@Z @ 0x180099E20 (-AddSinusoidal@CAnimationResource@@UEAAJNMMMM@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArray@UDwmAnimationPrimitive@@$0A@@@QEAAJPEFBUDwmAnimationPrimitive@@I@Z @ 0x180050C0C (-AddMultipleAndSet@-$DynArray@UDwmAnimationPrimitive@@$0A@@@QEAAJPEFBUDwmAnimationPrimitive@@I@Z.c)
 */

__int64 __fastcall CAnimationResource::_AddPrimitive(CAnimationResource *this, const struct DwmAnimationPrimitive *a2)
{
  int v2; // r13d
  unsigned int v3; // ebx
  char v6; // r12
  _QWORD *v8; // r10
  char *v9; // rbp
  char *v10; // r11
  char *v11; // r14
  _QWORD *v12; // r15
  __int64 v13; // rax
  __int64 v14; // rcx
  __int128 v15; // xmm1

  v2 = *((_DWORD *)this + 12);
  v3 = 0;
  v6 = 0;
  if ( *((_BYTE *)this + 64) )
    return (unsigned int)-2147024809;
  v8 = (_QWORD *)((char *)a2 + 8);
  if ( v2 )
  {
    if ( *v8 < *(_QWORD *)(32LL * (unsigned int)(*((_DWORD *)this + 12) - 1) + *((_QWORD *)this + 3) + 8) )
      return (unsigned int)-2147024809;
  }
  if ( *(_DWORD *)a2 == 3 )
  {
    if ( !v2 || *v8 == *(_QWORD *)(*((_QWORD *)this + 3) + 8LL) )
      return (unsigned int)-2147024809;
    v10 = (char *)a2 + 8;
    v9 = (char *)this + 24;
  }
  else
  {
    v9 = (char *)this + 24;
    v10 = (char *)a2 + 8;
    v11 = (char *)this + 24;
    v12 = (_QWORD *)((char *)a2 + 8);
    if ( !v2 )
      goto LABEL_10;
  }
  v11 = (char *)this + 24;
  v12 = v10;
  if ( *(_QWORD *)(32LL * (unsigned int)(*((_DWORD *)this + 12) - 1) + *((_QWORD *)this + 3) + 8) == *v8 )
  {
    v6 = 1;
    v11 = v9;
  }
LABEL_10:
  switch ( *(_DWORD *)a2 )
  {
    case 1:
    case 2:
      if ( _finite(*((float *)a2 + 4))
        && _finite(*((float *)a2 + 5))
        && _finite(*((float *)a2 + 6))
        && _finite(*((float *)a2 + 7)) )
      {
        break;
      }
      return (unsigned int)-2147024809;
    case 3:
      if ( *((_QWORD *)a2 + 2) > *v12 - *(_QWORD *)(*(_QWORD *)v11 + 8LL) )
        return (unsigned int)-2147024809;
      break;
    case 4:
      if ( !_finite(*((float *)a2 + 4)) )
        return (unsigned int)-2147024809;
      *((_BYTE *)this + 64) = 1;
      break;
    default:
      return (unsigned int)-2147467259;
  }
  if ( v6 )
  {
    v13 = *(_QWORD *)v11;
    v14 = 32LL * (unsigned int)(v2 - 1);
    v15 = *((_OWORD *)a2 + 1);
    *(_OWORD *)(v14 + v13) = *(_OWORD *)a2;
    *(_OWORD *)(v14 + v13 + 16) = v15;
  }
  else
  {
    return (unsigned int)DynArray<DwmAnimationPrimitive,0>::AddMultipleAndSet(v11, a2);
  }
  return v3;
}
