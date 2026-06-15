/*
 * XREFs of ?LoadDictionary@SpatialAudioMetadataDictionary@@AEAAJAEBU_GUID@@PEBG@Z @ 0x1801316D0
 * Callers:
 *     ?RuntimeClassInitialize@SpatialAudioMetadataDictionary@@QEAAJAEBU_GUID@@GPEBGPEAEI@Z @ 0x180131990 (-RuntimeClassInitialize@SpatialAudioMetadataDictionary@@QEAAJAEBU_GUID@@GPEBGPEAEI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18003BA90 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     Create_SpatialAudioDevicePropertyReader @ 0x18003D84C (Create_SpatialAudioDevicePropertyReader.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SpatialAudioMetadataDictionary::LoadDictionary(
        struct _GUID *this,
        const struct _GUID *a2,
        unsigned __int16 *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  __int64 v7; // r9
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // ebx
  unsigned __int8 *v13; // rdx
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, const struct _GUID *, __int64 *); // rdi
  unsigned __int64 v16; // rcx
  SIZE_T v17; // rax
  LPVOID v18; // rdx
  int v20; // [rsp+40h] [rbp-20h] BYREF
  __int64 v21; // [rsp+48h] [rbp-18h] BYREF
  __int64 v22; // [rsp+50h] [rbp-10h] BYREF
  const CHAR *v23; // [rsp+58h] [rbp-8h] BYREF
  unsigned int v24; // [rsp+80h] [rbp+20h] BYREF
  int v25; // [rsp+98h] [rbp+38h] BYREF

  v21 = 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)&this[3];
  EnterCriticalSection((LPCRITICAL_SECTION)&this[3]);
  if ( v6 )
    LeaveCriticalSection(v6);
  v22 = 0LL;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v22);
  v8 = Create_SpatialAudioDevicePropertyReader(a3, 0LL, &v22, v7);
  v12 = v8;
  if ( v8 >= 0 )
  {
    v14 = v22;
    v15 = *(__int64 (__fastcall **)(__int64, const struct _GUID *, __int64 *))(*(_QWORD *)v22 + 40LL);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v21);
    v8 = v15(v14, a2, &v21);
    v12 = v8;
    if ( v8 >= 0 )
    {
      this[6] = *a2;
      v8 = (*(__int64 (__fastcall **)(__int64, struct _GUID *))(*(_QWORD *)v21 + 32LL))(v21, this + 7);
      v12 = v8;
      if ( v8 >= 0 )
      {
        v24 = 0;
        v8 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v21 + 40LL))(v21, &v24);
        v12 = v8;
        if ( v8 >= 0 )
        {
          v16 = v24 >> 1;
          *(_DWORD *)&this[7].Data2 = v16;
          v17 = 2 * v16;
          if ( !is_mul_ok(v16, 2uLL) )
            v17 = -1LL;
          v18 = operator new[](v17, (const struct std::nothrow_t *)&std::nothrow);
          *(_QWORD *)this[7].Data4 = v18;
          if ( v18 )
          {
            v8 = (*(__int64 (__fastcall **)(__int64, LPVOID, _QWORD))(*(_QWORD *)v21 + 48LL))(v21, v18, v24);
            v12 = v8;
            if ( v8 < 0 && (unsigned int)dword_1801D32E8 > 2 )
            {
              v20 = 219;
              v13 = (unsigned __int8 *)&unk_1801AA44D;
              goto LABEL_22;
            }
          }
          else
          {
            v12 = -2147024882;
          }
        }
        else if ( (unsigned int)dword_1801D32E8 > 2 )
        {
          v20 = 212;
          v13 = (unsigned __int8 *)&unk_1801AA525;
          goto LABEL_22;
        }
      }
      else if ( (unsigned int)dword_1801D32E8 > 2 )
      {
        v20 = 208;
        v13 = (unsigned __int8 *)&unk_1801AA4F3;
        goto LABEL_22;
      }
    }
    else if ( (unsigned int)dword_1801D32E8 > 2 )
    {
      v20 = 201;
      v13 = (unsigned __int8 *)&unk_1801AA5F5;
      goto LABEL_22;
    }
  }
  else if ( (unsigned int)dword_1801D32E8 > 2 )
  {
    v20 = 198;
    v13 = (unsigned __int8 *)&unk_1801AA627;
LABEL_22:
    v25 = v8;
    v23 = "SpatialAudioMetadataDictionary::LoadDictionary";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v9,
      v13,
      v10,
      v11,
      &v23,
      (__int64)&v20,
      (__int64)&v25);
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v22);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v21);
  return v12;
}
