/*
 * XREFs of ??$ActivateInstance@V?$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180023A90
 * Callers:
 *     ??R_lambda_ab8afa584d195baf28431d185b201c0d_@@QEBA@XZ @ 0x18002BC98 (--R_lambda_ab8afa584d195baf28431d185b201c0d_@@QEBA@XZ.c)
 *     ??R_lambda_69f70f84236fb302921f03f01c6e57bb_@@QEBA@XZ @ 0x180074C44 (--R_lambda_69f70f84236fb302921f03f01c6e57bb_@@QEBA@XZ.c)
 * Callees:
 *     ??$ActivateInstance@UIPackageManager@Deployment@Management@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIPackageManager@Deployment@Management@1@@Z @ 0x1800238A8 (--$ActivateInstance@UIPackageManager@Deployment@Management@Windows@@@Foundation@Windows@@YAJPEAU.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033C28 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Management::Deployment::IPackageManager>>(
        __int64 a1,
        _QWORD *a2)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
  return Windows::Foundation::ActivateInstance<Windows::Management::Deployment::IPackageManager>(a1, a2);
}
