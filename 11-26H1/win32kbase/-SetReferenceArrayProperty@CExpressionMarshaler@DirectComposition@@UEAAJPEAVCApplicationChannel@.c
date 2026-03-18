/*
 * XREFs of ?SetReferenceArrayProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x140194670
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?GetWeakReferenceBase@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@PEAPEAVCWeakReferenceBase@2@@Z @ 0x1400490A8 (-GetWeakReferenceBase@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@PEAPE.c)
 *     ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x140138DF0 (-ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z.c)
 */

__int64 __fastcall DirectComposition::CExpressionMarshaler::SetReferenceArrayProperty(
        __int64 a1,
        struct _RTL_GENERIC_TABLE *a2,
        int a3,
        char *a4,
        unsigned __int64 a5,
        _BYTE *a6)
{
  int WeakReferenceBase; // ebx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 i; // rsi
  __int64 v15; // rbp
  __int64 v16; // rsi

  WeakReferenceBase = 0;
  *a6 = 0;
  if ( a3 == 14 && a4 )
  {
    if ( *(_QWORD *)(a1 + 176) )
    {
      return (unsigned int)-1073741790;
    }
    else
    {
      v10 = Win32AllocPoolWithQuotaZInitImpl(a1, 8 * a5, 0x72774344u);
      *(_QWORD *)(a1 + 176) = v10;
      if ( v10 )
      {
        for ( i = 0LL; ; i = (unsigned int)(i + 1) )
        {
          v15 = (unsigned int)i;
          if ( (unsigned int)i >= a5 )
            break;
          WeakReferenceBase = DirectComposition::CApplicationChannel::GetWeakReferenceBase(
                                a2,
                                *(struct DirectComposition::CResourceMarshaler **)&a4[8 * i],
                                (struct DirectComposition::CWeakReferenceBase **)(*(_QWORD *)(a1 + 176) + 8 * i));
          if ( WeakReferenceBase < 0 )
          {
            if ( (_DWORD)i )
            {
              v16 = 0LL;
              do
              {
                DirectComposition::CApplicationChannel::ReleaseWeakReference(
                  a2,
                  *(struct DirectComposition::CWeakReferenceBase **)(*(_QWORD *)(a1 + 176) + v16),
                  v12,
                  v13);
                v16 += 8LL;
                --v15;
              }
              while ( v15 );
            }
            GreDeleteFastMutex(*(char **)(a1 + 176), v11, v12, v13);
            *(_QWORD *)(a1 + 176) = 0LL;
            break;
          }
        }
        if ( WeakReferenceBase >= 0 )
        {
          *(_DWORD *)(a1 + 184) = a5;
          *a6 = 1;
          *(_DWORD *)(a1 + 16) &= ~0x1000u;
          GreDeleteFastMutex(a4, v11, v12, v13);
        }
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)WeakReferenceBase;
}
