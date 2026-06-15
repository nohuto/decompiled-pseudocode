/*
 * XREFs of ?HasDuckedStream@CProcess@@QEAAHXZ @ 0x180023B4C
 * Callers:
 *     ?HasDuckedStream@CApplication@@QEAAHXZ @ 0x18002BF3C (-HasDuckedStream@CApplication@@QEAAHXZ.c)
 * Callees:
 *     ?GetValueAt@?$CSimpleMap@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAIV?$CSimpleMapEqualHelper@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAI@ATL@@@ATL@@QEBAAEAPEAIH@Z @ 0x180023C60 (-GetValueAt@-$CSimpleMap@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAIV-$CS.c)
 *     ?SubjectToStreamClassPolicyGains@CProcess@@UEAAHXZ @ 0x180023C90 (-SubjectToStreamClassPolicyGains@CProcess@@UEAAHXZ.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x18003A890 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProcess::HasDuckedStream(CProcess *this)
{
  unsigned int v2; // r12d
  int v3; // ebx
  __int64 v4; // rbp
  unsigned int v5; // edx
  unsigned int v6; // ecx
  __int64 v7; // r13
  _QWORD *v8; // r14
  __int64 i; // rsi

  v2 = 0;
  if ( (unsigned int)CProcess::SubjectToStreamClassPolicyGains(this) )
  {
    v3 = 0;
    if ( *((int *)this + 68) > 0 )
    {
      v4 = 0LL;
      do
      {
        v7 = *(_QWORD *)ATL::CSimpleMap<std::wstring,unsigned int *,ATL::CSimpleMapEqualHelper<std::wstring,unsigned int *>>::GetValueAt(
                          (char *)this + 256,
                          (unsigned int)v3);
        if ( v3 < 0 || v3 >= *((_DWORD *)this + 68) )
        {
          ATL::_AtlRaiseException(v6, v5);
          JUMPOUT(0x180023C55LL);
        }
        v8 = (_QWORD *)(v4 + *((_QWORD *)this + 32));
        if ( v8[3] > 7uLL )
          v8 = (_QWORD *)*v8;
        for ( i = 0LL; (unsigned int)i < 0x18; i = (unsigned int)(i + 1) )
        {
          if ( *(_DWORD *)(v7 + 4 * i)
            && (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD *, _QWORD, _DWORD, bool))(*(_QWORD *)g_StreamClassPolicyManager
                                                                                               + 32LL))(
                 g_StreamClassPolicyManager,
                 *((unsigned int *)this + 41),
                 v8,
                 (unsigned int)i,
                 0,
                 *(_DWORD *)(*((_QWORD *)this + 28) + 208LL) != 0) )
          {
            v2 = 1;
            break;
          }
        }
        ++v3;
        v4 += 32LL;
      }
      while ( v3 < *((_DWORD *)this + 68) );
    }
  }
  return v2;
}
