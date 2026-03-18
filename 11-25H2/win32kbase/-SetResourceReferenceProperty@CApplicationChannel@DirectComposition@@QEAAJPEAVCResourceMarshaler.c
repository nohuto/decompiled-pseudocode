/*
 * XREFs of ?SetResourceReferenceProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@I0@Z @ 0x14005ADCC
 * Callers:
 *     ?SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCResourceMarshaler@2@_NPEA_N@Z @ 0x14005AC38 (-SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCReso.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetResourceReferenceProperty(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CResourceMarshaler *a2,
        __int64 a3,
        struct DirectComposition::CResourceMarshaler *a4)
{
  __int64 v4; // rax
  int v7; // edx
  int v8; // ecx
  unsigned int v9; // ecx
  __int64 i; // rax
  __int64 v11; // rcx
  char v13; // [rsp+48h] [rbp+10h] BYREF

  v4 = *(_QWORD *)a2;
  v13 = 0;
  v7 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, __int64, struct DirectComposition::CResourceMarshaler *, char *))(v4 + 280))(
         a2,
         this,
         a3,
         a4,
         &v13);
  if ( v7 >= 0 )
  {
    if ( v13 )
    {
      v8 = *((_DWORD *)a2 + 4);
      if ( (v8 & 2) == 0 )
      {
        if ( (v8 & 1) != 0 )
        {
          v9 = *((_DWORD *)a2 + 9);
          for ( i = v9; (unsigned int)i < 0xC0; LODWORD(i) = dword_140274520[i] )
          {
            if ( (_DWORD)i == 157 )
            {
              v11 = 456LL;
              goto LABEL_13;
            }
          }
          while ( 1 )
          {
            if ( v9 >= 0xC0 )
            {
              v11 = 440LL;
              goto LABEL_13;
            }
            if ( v9 == 28 )
              break;
            v9 = dword_140274520[v9];
          }
          v11 = 472LL;
LABEL_13:
          *((_QWORD *)a2 + 1) = *(_QWORD *)((char *)this + v11);
          *(_QWORD *)((char *)this + v11) = a2;
        }
        *((_DWORD *)a2 + 4) |= 2u;
        *((_BYTE *)this + 264) |= 1u;
      }
    }
  }
  return (unsigned int)v7;
}
