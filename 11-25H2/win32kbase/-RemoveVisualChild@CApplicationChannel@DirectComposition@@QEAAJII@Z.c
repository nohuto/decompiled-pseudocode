/*
 * XREFs of ?RemoveVisualChild@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1400216E4
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1400ACB50 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1400221BC (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::RemoveVisualChild(
        DirectComposition::CApplicationChannel *this,
        unsigned int a2,
        unsigned int a3)
{
  __int64 v5; // rsi
  struct DirectComposition::CResourceMarshaler *v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // ecx
  __int64 v10; // rax
  int v11; // eax
  int v12; // eax
  unsigned int v13; // edx
  __int64 i; // rax
  __int64 v15; // rdx
  struct DirectComposition::CResourceMarshaler *v16; // rax
  char v17; // [rsp+58h] [rbp+20h] BYREF

  v17 = 0;
  v5 = 0LL;
  v6 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(this, a2);
  if ( v6 )
  {
    v7 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v6 + 192LL))(v6);
    if ( v7
      && (!a3
       || (v16 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(this, a3)) != 0LL
       && (v5 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v16 + 192LL))(v16)) != 0) )
    {
      v10 = *(_QWORD *)v7;
      if ( v5 )
        v11 = (*(__int64 (__fastcall **)(__int64, DirectComposition::CApplicationChannel *, __int64, char *))(v10 + 328))(
                v7,
                this,
                v5,
                &v17);
      else
        v11 = (*(__int64 (__fastcall **)(__int64, DirectComposition::CApplicationChannel *, char *))(v10 + 336))(
                v7,
                this,
                &v17);
      v8 = v11;
      if ( v11 >= 0 )
      {
        if ( v17 )
        {
          v12 = *(_DWORD *)(v7 + 16);
          if ( (v12 & 2) == 0 )
          {
            if ( (v12 & 1) != 0 )
            {
              v13 = *(_DWORD *)(v7 + 36);
              for ( i = v13; (unsigned int)i < 0xC0; LODWORD(i) = dword_140274520[i] )
              {
                if ( (_DWORD)i == 157 )
                {
                  v15 = 456LL;
                  goto LABEL_20;
                }
              }
              while ( 1 )
              {
                if ( v13 >= 0xC0 )
                {
                  v15 = 440LL;
                  goto LABEL_20;
                }
                if ( v13 == 28 )
                  break;
                v13 = dword_140274520[v13];
              }
              v15 = 472LL;
LABEL_20:
              *(_QWORD *)(v7 + 8) = *(_QWORD *)((char *)this + v15);
              *(_QWORD *)((char *)this + v15) = v7;
            }
            *(_DWORD *)(v7 + 16) |= 2u;
            *((_BYTE *)this + 264) |= 1u;
          }
        }
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v8;
}
